#ifndef REGEX_STR_H
#define REGEX_STR_H

#include <QString>
#include <QRegularExpression>
class regex_str
{
public:
    regex_str();

    friend bool palindr(const QString& word);
    QString color(QString& str);
    QString palindrom(QString& str);
};
#endif // REGEX_STR_H
