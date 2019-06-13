#ifndef STOPWORDS_H
#define STOPWORDS_H

#include <string>
#include <map>
#include <cstdio>

using namespace std;

class stopwords
{
private:
    const char s[2005][15]={"able","about","above","according","accordingly","across","actually","after","afterwards","again","against","ain't","all","allow","allows","almost","alone","along","already","also","although","always","am","among","amongst","an","and","another","any","anybody","anyhow","anyone","anything","anyway","anyways","anywhere","apart","appear","appreciate","appropriate","are","aren't","around","as","a's","aside","ask","asking","associated","at","available",
    "away","awfully","be","became","because","become","becomes","becoming","been","before","beforehand","behind","being","believe","below","beside","besides","best","better","between","beyond","both","brief","but","by","came","can","cannot","cant","can't","cause","causes","certain","certainly","changes","clearly","c'mon","co","com","come","comes","concerning","consequently","consider","considering","contain","containing","contains","corresponding","could","couldn't",
    "course","c's","currently","definitely","described","despite","did","didn't","different","do","does","doesn't","doing","done","don't","down","downwards","during","each","edu",
    "eg","eight","either","else","elsewhere","enough","entirely","especially","et","etc","even","ever","every","everybody","everyone","everything","everywhere","ex","exactly","example","except","far","few","fifth","first","five","followed","following","follows","for","former","formerly","forth","four","from","further","furthermore","get","gets","getting","given","gives","go","goes","going","gone","got","gotten","greetings","had","hadn't","happens","hardly","has",
    "hasn't","have","haven't","having","he","hello","help","hence","her","here","hereafter","hereby","herein","here's","hereupon","hers","herself","he's","hi","him","himself","his","hither","hopefully","how","howbeit","however","i'd","ie","if","ignored","i'll","i'm","immediate","in","inasmuch","inc","indeed","indicate","indicated","indicates","inner","insofar","instead","into","inward","is","isn't","it","it'd","it'll","its","it's","itself","i've","just","keep","keeps",
    "kept","know","known","knows","last","lately","later","latter","latterly","least","less","lest","let","let's","like","liked","likely","little","look","looking","looks","ltd","mainly","many","may","maybe","me","mean","meanwhile","merely","might","more","moreover","most","mostly","much","must","my","myself","name","namely","nd","near","nearly","necessary","need","needs","neither","never","nevertheless","new","next","nine","no","nobody","non","none","noone","nor","normally",
    "not","nothing","novel","now","nowhere","obviously","of","off","often","oh","ok","okay","old","on","once","one","ones","only",
    "onto","or","other","others","otherwise","ought","our","ours","ourselves","out","outside","over","overall","own","particular","particularly","per","perhaps","placed","please","plus","possible","presumably","probably","provides","que","quite","qv","rather","rd","re","really","reasonably","regarding","regardless","regards","relatively","respectively","right","said","same","saw","say","saying","says","second","secondly","see","seeing",
    "seem","seemed","seeming","seems","seen","self","selves","sensible","sent","serious","seriously","seven","several","shall","she","should","shouldn't","since","six","so","some","somebody","somehow","someone","something","sometime","sometimes","somewhat","somewhere","soon","sorry","specified","specify","specifying","still","sub","such","sup","sure","take","taken","tell","tends","th",
    "than","thank","thanks","thanx","that","thats","that's","the","their","theirs","them","themselves","then","thence","there","thereafter","thereby","therefore","therein","theres","there's","thereupon","these","they",
    "they'd","they'll","they're","they've","think","third","this","thorough","thoroughly","those","though","three","through","throughout","thru","thus","to","together","too","took","toward","towards","tried","tries","truly","try","trying","t's","twice","two","un","under","unfortunately","unless","unlikely","until","unto","up","upon","us","use","used","useful","uses","using","usually","value","various","very","via","viz","vs","want","wants","was","wasn't","way","we","we'd","welcome",
    "well","we'll","went","were","we're","weren't","we've","what","whatever","what's","when","whence","whenever","where","whereafter","whereas","whereby","wherein","where's","whereupon","wherever","whether","which","while","whither","who","whoever","whole","whom","who's","whose","why","will","willing","wish","with","within","without","wonder","won't","would","wouldn't","yes","yet","you","you'd","you'll","your","you're","yours","yourself","yourselves","you've","zero","zt","ZT","zz",
    "ZZ","a","able","about","above","abst","accordance","according","accordingly","across","act","actually","added","adj","adopted","affected","affecting","affects","after","afterwards","again","against","ah","ain't","all","allow","allows","almost","alone","along","already","also","although","always","am","among","amongst","an","and","announce","another","any","anybody","anyhow","anymore","anyone","anything","anyway","anyways","anywhere","apart","apparently","appear","appreciate",
    "appropriate","approximately","are","area","areas","aren","arent","aren't","arise","around","as","a's","aside","ask","asked","asking","asks","associated","at","auth","available","away","awfully","b","back","backed","backing","backs","be","became","because","become","becomes","becoming","been","before","beforehand","began",
    "begin","beginning","beginnings","begins","behind","being","beings","believe","below","beside","besides",
    "best","better","between","beyond","big","biol","both","brief","briefly","but","by","c","ca","came","can","cannot","cant","can't","case","cases",
    "cause","causes","certain","certainly","changes","clear","clearly","c'mon","co","com","come","comes","concerning","consequently","consider","considering","contain","containing","contains","corresponding","could","couldnt","couldn't","course","c's","currently","d","'d","date","definitely","describe","described","despite","did","didn't","differ","different","differently","discuss","do","does","doesn't","doing","done","don't","down","downed","downing","downs","downwards","due",
    "during","e","each","early","ed","edu","effect","eg","eight","eighty","either","else","elsewhere","end","ended","ending","ends","enough","entirely","especially","et","et-al","etc","even","evenly","ever","every","everybody","everyone","everything","everywhere","ex","exactly","example","except","f","face","faces","fact","facts","far","felt","few","ff","fifth","find","finds","first","five","fix","followed","following","follows","for","former","formerly","forth","found","four",
    "from","full","fully","further","furthered","furthering","furthermore","furthers","g","gave","general","generally","get","gets","getting","give","given","gives","giving","go","goes","going","gone","good","goods","got","gotten","great","greater","greatest","greetings","group","grouped","grouping","groups","h","had","hadn't","happens","hardly","has","hasn't","have","haven't","having","he","hed","hello","help","hence","her","here","hereafter","hereby","herein","heres","here's",
    "hereupon","hers","herself","hes","he's","hi","hid","high","higher","highest","him","himself","his","hither","home","hopefully","how","howbeit","however","hundred","i","id","i'd","ie","if","ignored","i'll","im","i'm","immediate","immediately","importance","important","in","inasmuch","inc","include","indeed","index","indicate","indicated","indicates","information","inner","insofar","instead","interest","interested","interesting","interests","into","invention","inward","is","isn't",
    "it","itd","it'd","it'll","its","it's","itself","i've","j","just","k","keep","keeps","kept","keys","kg","kind","km","knew","know","known","knows","l","large","largely","last","lately","later","latest","latter","latterly","least","less","lest","let","lets","let's","like","liked","likely","line","little","'ll","long","longer","longest","look","looking","looks","ltd","m","'m","made","mainly","make","makes","making","man","many","may","maybe","me","mean","means","meantime","meanwhile",
    "member","members","men","merely","mg","might","million","miss","ml","more","moreover","most","mostly","mr","mrs","much","mug","must","my","myself","n","na","name","namely","nay","nd","near","nearly","necessarily","necessary","need","needed","needing","needs","neither","never","nevertheless","new","newer","newest","next","nine","ninety","no","nobody","non","none","nonetheless","noone","nor","normally","nos","not","noted","nothing","novel","now","nowhere","n't","number","numbers","o",
    "obtain","obtained","obviously","of","off","often","oh","ok","okay","old","older","oldest","omitted","on","once","one","ones","only","onto","open","opened","opening","opens","or","ord","order","ordered","ordering","orders","other",
    "others","otherwise","ought","our","ours","ourselves","out","outside","over","overall","owing","own","p","page","pages","part","parted","particular","particularly","parting","parts","past","per","perhaps","place","placed","places","please","plus","point",
    "pointed","pointing","points","poorly","possible","possibly","potentially","pp","predominantly","present","presented","presenting","presents","presumably","previously","primarily","probably","problem","problems","promptly","proud","provides","put","puts","q","que","quickly","quite","qv","r","ran","rather","rd","re","'re","readily","really","reasonably","recent","recently","ref","refs","regarding","regardless","regards","related","relatively","research","respectively","resulted","resulting",
    "results","right","room","rooms","run","s","'s","said","same","saw","say","saying","says","sec","second","secondly","seconds","section","see","seeing","seem","seemed","seeming","seems",
    "seen","sees","self","selves","sensible","sent","serious","seriously","seven","several","shall","she","shed","she'll","shes","should","shouldn't","show","showed","showing","shown","showns","shows","side","sides","significant","significantly","similar","similarly","since","six","slightly","small","smaller","smallest","so","some","somebody","somehow","someone","somethan","something","sometime","sometimes","somewhat","somewhere","soon","sorry","specifically","specified","specify","specifying",
    "state","states","still","stop","strongly","sub","substantially","successfully","such","sufficiently","suggest","sup","sure","t","'t","take","taken","taking","tell","tends","th","than","thank","thanks","thanx","that","that'll","thats","that's","that've","the","their","theirs","them","themselves","then","thence","there","thereafter","thereby","thered","therefore","therein","there'll","thereof","therere","theres","there's","thereto","thereupon","there've","these","they","theyd","they'd","they'll",
    "theyre","they're","they've","thing","things","think","thinks","third","this","thorough","thoroughly","those","thou","though","thoughh","thought","thoughts","thousand","three","throug","through","throughout","thru","thus","til","tip","to","today","together","too","took","toward","towards","tried","tries","truly","try","trying","ts","t's","turn","turned","turning","turns","twice","two","u","un","under","unfortunately","unless","unlike","unlikely","until","unto","up","upon","ups","us","use","used",
    "useful","usefully","usefulness","uses","using","usually","uucp","v","value","various","'ve","very","via","viz","vol","vols","vs","w","want",
    "wanted","wanting","wants","was","wasn't","way","ways","we","wed","we'd","welcome","well","we'll","wells","went","were","we're","weren't","we've","what","whatever","what'll","whats","what's","when","whence","whenever","where","whereafter","whereas","whereby","wherein","wheres","where's","whereupon","wherever","whether","which","while","whim","whither","who","whod","whoever","whole","who'll","whom","whomever","whos","who's","whose","why","widely","will","willing","wish","with","within","without",
    "wonder","won't","words","work","worked","working","works","world","would","wouldn't","www","x","y","year","years","yes","yet","you","youd","you'd","you'll","young","younger","youngest","your","youre","you're","yours","yourself","yourselves","you've","z","zero"};
    map< string ,bool> mp;
    const int length=1434;

public:
    stopwords()
    {
        mp.clear();
        for (int i=0;i<length;i++)
        {
            string ret=s[i];
            mp[ret]=1;
            if (ret[0]>='a' && ret[0]<='z') ret[0]+='A'-'a';
            mp[ret]=1;
        }
    }

    bool Search(char s[])
    {
        return mp[s];
    }
    bool Search (string s){ return mp[s]; }

    void addstopwords(char s[]){ mp[s]=1; }
    void addstopwords(string s){ mp[s]=1; }

};


#endif
