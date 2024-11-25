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
{}

bool ToggleSwitch::checked() const
{
    return m_checked;
}

void ToggleSwitch::setChecked(bool newChecked)
{
    if (m_checked == newChecked)
        return;
    m_checked = newChecked;
    emit checkedChanged();
}

bool ToggleSwitch::tooltipEnabled() const
{
    return m_tooltipEnabled;
}

void ToggleSwitch::setTooltipEnabled(bool newTooltipEnabled)
{
    if (m_tooltipEnabled == newTooltipEnabled)
        return;
    m_tooltipEnabled = newTooltipEnabled;
    emit tooltipEnabledChanged();
}

QString ToggleSwitch::tooltipText() const
{
    return m_tooltipText;
}

void ToggleSwitch::setTooltipText(const QString &newTooltipText)
{
    if (m_tooltipText == newTooltipText)
        return;
    m_tooltipText = newTooltipText;
    emit tooltipTextChanged();
}

QColor ToggleSwitch::backgroundColor() const
{
    return m_backgroundColor;
}

void ToggleSwitch::setBackgroundColor(const QColor &newBackgroundColor)
{
    if (m_backgroundColor == newBackgroundColor)
        return;
    m_backgroundColor = newBackgroundColor;
    emit backgroundColorChanged();
}

QColor ToggleSwitch::handleColor() const
{
    return m_handleColor;
}

void ToggleSwitch::setHandleColor(const QColor &newHandleColor)
{
    if (m_handleColor == newHandleColor)
        return;
    m_handleColor = newHandleColor;
    emit handleColorChanged();
}

QColor ToggleSwitch::infillColor() const
{
    return m_infillColor;
}

void ToggleSwitch::setInfillColor(const QColor &newInfillColor)
{
    if (m_infillColor == newInfillColor)
        return;
    m_infillColor = newInfillColor;
    emit infillColorChanged();
}

QColor ToggleSwitch::borderColor() const
{
    return m_borderColor;
}

void ToggleSwitch::setBorderColor(const QColor &newBorderColor)
{
    if (m_borderColor == newBorderColor)
        return;
    m_borderColor = newBorderColor;
    emit borderColorChanged();
}

} // namespace UiLib
