////////////////////////////////////////////////////////////////
// INCLUDE FILES
////////////////////////////////////////////////////////////////

// Standard includes
#include <iostream>

// Own includes
//#include "definitions.h"

// Qt includes
#include <QMessageBox>
#include <QCloseEvent>
#include <QTimer>

// Widgets
#include "mdmainwin.h"
#include "ui_mdmainwin.h"
#include "GLWidget.h"

////////////////////////////////////////////////////////////////
// CONSTRUCTOR & DESTRUCTOR
////////////////////////////////////////////////////////////////

mdmainwin::mdmainwin(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::mdmainwin)
{
    // Set up user interface
    ui->setupUi(this);

		
		GLWidget* newGL;
		newGL = new GLWidget;
		ui->verticalLayout_6->addWidget(newGL);
		newGL->resize(600,400);
    
		newGL->show();
		//newGL = new GLWidget(this);
    //newGL->show();
		
		
		
		//QWidget *glwid = ui->myWidget;
    //glwid->resize(50,50);
    //glwid->show();
    
    //setCentralWidget(newGL); 
		


    // Set up simulation output text browser
    int font_size = 7;
    int tab_width = 8;
    // Create font for the text browser
    QFont log_font("Courier New", font_size + 2, QFont::Normal, false); /* TODO: Why does Qt remove 2 from the font size?? */
    // Create text browser
    QTextEdit *tb = ui->simulation_output_tb;
    tb->setAutoFormatting(QTextEdit::AutoNone); /* Don't format inserted text */
    tb->setFont(log_font);
    tb->setLineWrapMode(QTextEdit::WidgetWidth); /* Wrap text at widget edge */
    tb->setOverwriteMode(false); /* Don't overwrite other text when inserting new one */
    tb->setReadOnly(true); /* Don't accept user inputed text */
    tb->setTabChangesFocus(true); /* Change focus when tab is pressed */
    tb->setTabStopWidth(tab_width * font_size); /* Tab width in pixels */
    tb->setUndoRedoEnabled(false); /* Don't allow undo */
    tb->setWordWrapMode(QTextOption::WrapAnywhere); /* Use all characters places on each line */

	  // Start simulation directly when application has finished loading
    QTimer::singleShot(0, this, SLOT(on_start_simulation_pb_clicked()));
}

mdmainwin::~mdmainwin()
{
    delete ui;
}

////////////////////////////////////////////////////////////////
// PRIVATE SLOTS
////////////////////////////////////////////////////////////////

void mdmainwin::on_start_simulation_pb_clicked()
{
  
}

void mdmainwin::closeEvent(QCloseEvent *event)
{
  
}

////////////////////////////////////////////////////////////////
// PRIVATE NON-STATIC MEMBER FUNCTIONS
////////////////////////////////////////////////////////////////

//void mdmainwin::write_to_text_browser(string output)
//{
  
//}

////////////////////////////////////////////////////////////////
// PRIVATE STATIC MEMBER FUNCTIONS
////////////////////////////////////////////////////////////////

//void mdmainwin::static_write_to_text_browser(void* void_ptr_mainwin, string output)
//{
  
//}

void mdmainwin::static_process_events(void* void_ptr_mainwin)
{
  
}

void mdmainwin::on_sigma_le_editingFinished()
{
    ui->statusbar->showMessage("Editing sigma finished.");
}

void mdmainwin::on_epsilon_le_editingFinished()
{
    ui->statusbar->showMessage("Editing epsilon finished.");
}

void mdmainwin::on_mass_le_editingFinished()
{
    ui->statusbar->showMessage("Code needed");
}

void mdmainwin::on_lattice_constant_le_editingFinished()
{
    ui->statusbar->showMessage("Code needed");
}

void mdmainwin::on_lattice_type_cb_activated(const QString &arg1)
{
    ui->statusbar->showMessage("Code needed");
}

void mdmainwin::on_epsilon_unit_cb_activated(const QString &arg1)
{
    ui->statusbar->showMessage("Code needed");
}

void mdmainwin::on_num_particles_le_editingFinished()
{
    ui->statusbar->showMessage("Code needed");
}

void mdmainwin::on_init_temperature_le_editingFinished()
{
    ui->statusbar->showMessage("Code needed");
}

void mdmainwin::on_desired_pressure_le_editingFinished()
{
    ui->statusbar->showMessage("Code needed");
}

void mdmainwin::on_desire_temperature_le_editingFinished()
{
    ui->statusbar->showMessage("Code needed");
}

void mdmainwin::on_desired_pressure_unit_cb_activated(const QString &arg1)
{
    ui->statusbar->showMessage("Code needed");
}

void mdmainwin::on_time_step_le_editingFinished()
{
    ui->statusbar->showMessage("Code needed");
}

void mdmainwin::on_num_time_steps_le_editingFinished()
{
    ui->statusbar->showMessage("Code needed");
}

void mdmainwin::on_inner_cutoff_le_editingFinished()
{
    ui->statusbar->showMessage("Code needed");
}

void mdmainwin::on_outer_cutoff_le_editingFinished()
{
    ui->statusbar->showMessage("Code needed");
}

void mdmainwin::on_measurement_interval_sb_editingFinished()
{
    ui->statusbar->showMessage("Code needed");
}

void mdmainwin::on_npe_rb_clicked()
{
    ui->statusbar->showMessage("Code needed");
}

void mdmainwin::on_nve_rb_clicked()
{
    ui->statusbar->showMessage("Code needed");
}

void mdmainwin::on_nvt_rb_clicked()
{
    ui->statusbar->showMessage("Code needed");
}

void mdmainwin::on_npt_rb_clicked()
{
    ui->statusbar->showMessage("Code needed");
}

void mdmainwin::on_diffoceff_cb_clicked(bool checked)
{
    ui->statusbar->showMessage("Code needed");
}

void mdmainwin::on_pressure_cb_clicked(bool checked)
{
    ui->statusbar->showMessage("Code needed");
}

void mdmainwin::on_cv_cb_clicked(bool checked)
{
    ui->statusbar->showMessage("Code needed");
}

void mdmainwin::on_msd_cb_clicked(bool checked)
{
    ui->statusbar->showMessage("Code needed");
}

void mdmainwin::on_energy_total_cb_clicked(bool checked)
{
    ui->statusbar->showMessage("Code needed");
}

void mdmainwin::on_energy_kinetic_cb_clicked(bool checked)
{
    ui->statusbar->showMessage("Code needed");
}

void mdmainwin::on_energy_potential_cb_clicked(bool checked)
{
    ui->statusbar->showMessage("Code needed");
}

void mdmainwin::on_cohesive_energy_cb_clicked(bool checked)
{
    ui->statusbar->showMessage("Code needed");
}

void mdmainwin::on_store_particle_possitions_cb_clicked(bool checked)
{
    ui->statusbar->showMessage("Code needed");
}

void mdmainwin::on_settings_bb_accepted()
{
    ui->statusbar->showMessage("Settings accepted");
}

void mdmainwin::on_settings_bb_rejected()
{
    ui->statusbar->showMessage("Settings rejected");
}

/*
void mdmainwin::on_draw_particles_cb_clicked(bool checked)
{
    ui->statusbar->showMessage("Code needed");
}
*/

void mdmainwin::on_save_element_pb_clicked()
{
    ui->statusbar->showMessage("Saving element... (don't wait in vain)");
}

void mdmainwin::on_load_element_pb_clicked()
{
    ui->statusbar->showMessage("Loading element... (don't wait in vain)");
}
