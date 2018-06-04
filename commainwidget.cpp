#include "commainwidget.h"

MainWidget *comMainWidget::p_mainWidget = NULL;
comMainWidget::comMainWidget()
{

}

void comMainWidget::InitForm(){
    p_mainWidget = new MainWidget();
}
