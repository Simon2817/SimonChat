#include "global.h"

std::function<void(QWidget*)> repolish = [](QWidget* widget)
{
    // 将部件重置为未应用任何样式的状态
    widget->style()->unpolish(widget);
    // 根据当前样式表重新渲染小部件外观
    widget->style()->polish(widget);
};
