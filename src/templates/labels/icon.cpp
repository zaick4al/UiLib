#include "icon.h"
#include <colors.h>
#include <icons.h>
namespace UiLib {

Icon::Icon() : m_color(UiLib::Colors::instance().light()),
    m_iconSource(UiLib::Icons::instance().accept())
{}

Icon *Icon::create(QQmlEngine *p_engine)
{
    auto icon = createFromModule(p_engine, "Icon", "UiLib");
    return qobject_cast<Icon *>(icon);
}

QUrl Icon::iconSource() const
{
    return m_iconSource;
}

void Icon::setIconSource(const QUrl &newIconSource)
{
    if (m_iconSource == newIconSource)
        return;
    m_iconSource = newIconSource;
    emit iconSourceChanged();
}

QColor Icon::color() const
{
    return m_color;
}

void Icon::setColor(const QColor &newColor)
{
    if (m_color == newColor)
        return;
    m_color = newColor;
    emit colorChanged();
}

} // namespace UiLib
