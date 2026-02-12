#include "toggleswitch.h"
#include <colors.h>

namespace UiLib {

ToggleSwitch::ToggleSwitch() :
    m_checked(false),
    m_tooltipEnabled(false),
    m_backgroundColor(Colors::instance().dark()),
    m_handleColor(Colors::instance().light()),
    m_infillColor(Colors::instance().dark()),
    m_borderColor(Colors::instance().darkest())
{
    setFlag(ItemHasContents, true);
}

ToggleSwitch *ToggleSwitch::create(QQmlEngine *p_engine)
{
    auto toggleswitch = createFromModule(p_engine, "ToggleSwitch", "UiLib");
    return qobject_cast<ToggleSwitch *>(toggleswitch);
}

bool ToggleSwitch::checked() const
{
    return m_checked;
}

void ToggleSwitch::setChecked(bool p_checked)
{
    if (m_checked == p_checked)
        return;
    m_checked = p_checked;
    emit checkedChanged();
}

bool ToggleSwitch::tooltipEnabled() const
{
    return m_tooltipEnabled;
}

void ToggleSwitch::setTooltipEnabled(bool p_tooltipEnabled)
{
    if (m_tooltipEnabled == p_tooltipEnabled)
        return;
    m_tooltipEnabled = p_tooltipEnabled;
    emit tooltipEnabledChanged();
}

QString ToggleSwitch::tooltipText() const
{
    return m_tooltipText;
}

void ToggleSwitch::setTooltipText(const QString &p_tooltipText)
{
    if (m_tooltipText == p_tooltipText)
        return;
    m_tooltipText = p_tooltipText;
    emit tooltipTextChanged();
}

QColor ToggleSwitch::backgroundColor() const
{
    return m_backgroundColor;
}

void ToggleSwitch::setBackgroundColor(const QColor &p_backgroundColor)
{
    if (m_backgroundColor == p_backgroundColor)
        return;
    m_backgroundColor = p_backgroundColor;
    emit backgroundColorChanged();
}

QColor ToggleSwitch::handleColor() const
{
    return m_handleColor;
}

void ToggleSwitch::setHandleColor(const QColor &p_handleColor)
{
    if (m_handleColor == p_handleColor)
        return;
    m_handleColor = p_handleColor;
    emit handleColorChanged();
}

QColor ToggleSwitch::infillColor() const
{
    return m_infillColor;
}

void ToggleSwitch::setInfillColor(const QColor &p_infillColor)
{
    if (m_infillColor == p_infillColor)
        return;
    m_infillColor = p_infillColor;
    emit infillColorChanged();
}

QColor ToggleSwitch::borderColor() const
{
    return m_borderColor;
}

void ToggleSwitch::setBorderColor(const QColor &p_borderColor)
{
    if (m_borderColor == p_borderColor)
        return;
    m_borderColor = p_borderColor;
    emit borderColorChanged();
}

} // namespace UiLib
