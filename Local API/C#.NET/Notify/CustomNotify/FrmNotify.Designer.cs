
namespace CustomNotify
{
  partial class FrmNotify
  {
    /// <summary>
    /// Required designer variable.
    /// </summary>
    private System.ComponentModel.IContainer components = null;

    /// <summary>
    /// Clean up any resources being used.
    /// </summary>
    /// <param name="disposing">true if managed resources should be disposed; otherwise, false.</param>
    protected override void Dispose(bool disposing)
    {
      if (disposing && (components != null))
      {
        components.Dispose();
      }
      base.Dispose(disposing);
    }

    #region Windows Form Designer generated code

    /// <summary>
    /// Required method for Designer support - do not modify
    /// the contents of this method with the code editor.
    /// </summary>
    private void InitializeComponent()
    {
      this.components = new System.ComponentModel.Container();
      this.panelColor = new System.Windows.Forms.Panel();
      this.btnRed = new System.Windows.Forms.Button();
      this.btnGreen = new System.Windows.Forms.Button();
      this.btnBlue = new System.Windows.Forms.Button();
      this.btnClose = new System.Windows.Forms.Button();
      this.btnClone = new System.Windows.Forms.Button();
      this.tmrTestNotify = new System.Windows.Forms.Timer(this.components);
      this.txtModule = new System.Windows.Forms.TextBox();
      this.label1 = new System.Windows.Forms.Label();
      this.label2 = new System.Windows.Forms.Label();
      this.txtBuild = new System.Windows.Forms.TextBox();
      this.SuspendLayout();
      // 
      // panelColor
      // 
      this.panelColor.BackColor = System.Drawing.Color.Gray;
      this.panelColor.Location = new System.Drawing.Point(12, 71);
      this.panelColor.Name = "panelColor";
      this.panelColor.Size = new System.Drawing.Size(186, 159);
      this.panelColor.TabIndex = 0;
      // 
      // btnRed
      // 
      this.btnRed.Location = new System.Drawing.Point(204, 71);
      this.btnRed.Name = "btnRed";
      this.btnRed.Size = new System.Drawing.Size(75, 23);
      this.btnRed.TabIndex = 1;
      this.btnRed.Text = "Red";
      this.btnRed.UseVisualStyleBackColor = true;
      this.btnRed.Click += new System.EventHandler(this.btnRed_Click);
      // 
      // btnGreen
      // 
      this.btnGreen.Location = new System.Drawing.Point(204, 100);
      this.btnGreen.Name = "btnGreen";
      this.btnGreen.Size = new System.Drawing.Size(75, 23);
      this.btnGreen.TabIndex = 2;
      this.btnGreen.Text = "Green";
      this.btnGreen.UseVisualStyleBackColor = true;
      this.btnGreen.Click += new System.EventHandler(this.btnGreen_Click);
      // 
      // btnBlue
      // 
      this.btnBlue.Location = new System.Drawing.Point(204, 129);
      this.btnBlue.Name = "btnBlue";
      this.btnBlue.Size = new System.Drawing.Size(75, 23);
      this.btnBlue.TabIndex = 3;
      this.btnBlue.Text = "Blue";
      this.btnBlue.UseVisualStyleBackColor = true;
      this.btnBlue.Click += new System.EventHandler(this.btnBlue_Click);
      // 
      // btnClose
      // 
      this.btnClose.Location = new System.Drawing.Point(204, 207);
      this.btnClose.Name = "btnClose";
      this.btnClose.Size = new System.Drawing.Size(75, 23);
      this.btnClose.TabIndex = 4;
      this.btnClose.Text = "Close";
      this.btnClose.UseVisualStyleBackColor = true;
      this.btnClose.Click += new System.EventHandler(this.btnClose_Click);
      // 
      // btnClone
      // 
      this.btnClone.Location = new System.Drawing.Point(204, 178);
      this.btnClone.Name = "btnClone";
      this.btnClone.Size = new System.Drawing.Size(75, 23);
      this.btnClone.TabIndex = 5;
      this.btnClone.Text = "Clone";
      this.btnClone.UseVisualStyleBackColor = true;
      this.btnClone.Click += new System.EventHandler(this.btnClone_Click);
      // 
      // tmrTestNotify
      // 
      this.tmrTestNotify.Enabled = true;
      this.tmrTestNotify.Interval = 10;
      this.tmrTestNotify.Tick += new System.EventHandler(this.tmrTestNotify_Tick);
      // 
      // txtModule
      // 
      this.txtModule.Location = new System.Drawing.Point(98, 11);
      this.txtModule.Name = "txtModule";
      this.txtModule.ReadOnly = true;
      this.txtModule.Size = new System.Drawing.Size(100, 20);
      this.txtModule.TabIndex = 6;
      // 
      // label1
      // 
      this.label1.AutoSize = true;
      this.label1.Location = new System.Drawing.Point(13, 14);
      this.label1.Name = "label1";
      this.label1.Size = new System.Drawing.Size(45, 13);
      this.label1.TabIndex = 7;
      this.label1.Text = "Module:";
      // 
      // label2
      // 
      this.label2.AutoSize = true;
      this.label2.Location = new System.Drawing.Point(13, 43);
      this.label2.Name = "label2";
      this.label2.Size = new System.Drawing.Size(33, 13);
      this.label2.TabIndex = 8;
      this.label2.Text = "Build:";
      // 
      // txtBuild
      // 
      this.txtBuild.Location = new System.Drawing.Point(98, 40);
      this.txtBuild.Name = "txtBuild";
      this.txtBuild.ReadOnly = true;
      this.txtBuild.Size = new System.Drawing.Size(100, 20);
      this.txtBuild.TabIndex = 9;
      // 
      // FrmNotify
      // 
      this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
      this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
      this.ClientSize = new System.Drawing.Size(291, 241);
      this.ControlBox = false;
      this.Controls.Add(this.txtBuild);
      this.Controls.Add(this.label2);
      this.Controls.Add(this.label1);
      this.Controls.Add(this.txtModule);
      this.Controls.Add(this.btnClone);
      this.Controls.Add(this.btnClose);
      this.Controls.Add(this.btnBlue);
      this.Controls.Add(this.btnGreen);
      this.Controls.Add(this.btnRed);
      this.Controls.Add(this.panelColor);
      this.Name = "FrmNotify";
      this.ShowIcon = false;
      this.Text = "Custom Notify Example";
      this.ResumeLayout(false);
      this.PerformLayout();

    }

    #endregion

    private System.Windows.Forms.Panel panelColor;
    private System.Windows.Forms.Button btnRed;
    private System.Windows.Forms.Button btnGreen;
    private System.Windows.Forms.Button btnBlue;
    private System.Windows.Forms.Button btnClose;
    private System.Windows.Forms.Button btnClone;
    private System.Windows.Forms.Timer tmrTestNotify;
    private System.Windows.Forms.TextBox txtModule;
    private System.Windows.Forms.Label label1;
    private System.Windows.Forms.Label label2;
    private System.Windows.Forms.TextBox txtBuild;
  }
}

