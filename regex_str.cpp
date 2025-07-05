#include "regex_str.h"
#include <QVector>

regex_str::regex_str() {}

bool palindr(const QString& word) {
    int left = 0, right = word.size() - 1;
    while (left < right) {
        if (word[left] != word[right]) {
            return false;
        }
        left++;
        right--;
    }
    return true;
}
QString regex_str::color(QString& str){
    QString result;
    static const QRegularExpression color("#[0-9A-Fa-f]{6}");

    result = "Шестнадцатиричные идентификаторы цвета:\n";
    QRegularExpressionMatchIterator it = color.globalMatch(str);
    while (it.hasNext()) {
        QRegularExpressionMatch qm = it.next();
        result += qm.captured(0) + "\n";
    }
    if(result !="Шестнадцатиричные идентификаторы цвета:\n")
        return result;
    else return "Не найдено";
}
QString regex_str::palindrom(QString& str){
    static const QRegularExpression rgx("[a-zA-Z]+");
    QString result;

    QRegularExpressionMatchIterator it = rgx.globalMatch(str);
    QVector<QString> pal;
    while (it.hasNext()) {
        QRegularExpressionMatch match = it.next();
        QString word = match.captured();
        if (palindr(word)) {
            pal.append(word);
        }
    }
    std::sort(pal.begin(), pal.end(), []
    (const QString& a, const QString& b){return a.size()<b.size();});

    for(const QString& str: pal){
        result += str + " ";
    }

    if(!result.isEmpty()) return result;
    else return "Слов-палиндромов не найдено";
}
