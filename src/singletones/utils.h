#ifndef UTILS_H
#define UTILS_H

#include <QQuickItem>

#ifndef UiUtils
#define UiUtils UiLib::Utils::instance()
#endif //UiUtils

namespace UiLib {

class Utils : public QQuickItem
{
    Q_OBJECT
    QML_ELEMENT
    QML_SINGLETON
public:
    Utils();

    static Utils &instance();

    Q_INVOKABLE QColor blendColors(QColor p_firstColor, QColor p_secondColor, int p_mixStrength);

};

} // namespace UiLib

#endif // UTILS_H
