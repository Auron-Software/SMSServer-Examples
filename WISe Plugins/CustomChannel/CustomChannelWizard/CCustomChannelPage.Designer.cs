
namespace CCustomChannelWizard
{
  partial class CCustomChannelPage
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

    #region Component Designer generated code

    /// <summary> 
    /// Required method for Designer support - do not modify 
    /// the contents of this method with the code editor.
    /// </summary>
    private void InitializeComponent()
    {
      this.label1 = new System.Windows.Forms.Label();
      this.txtConfigString = new System.Windows.Forms.TextBox();
      this.SuspendLayout();
      // 
      // label1
      // 
      this.label1.AutoSize = true;
      this.label1.Location = new System.Drawing.Point(15, 24);
      this.label1.Name = "label1";
      this.label1.Size = new System.Drawing.Size(91, 13);
      this.label1.TabIndex = 0;
      this.label1.Text = "Test config string:";
      // 
      // txtConfigString
      // 
      this.txtConfigString.Location = new System.Drawing.Point(112, 20);
      this.txtConfigString.Name = "txtConfigString";
      this.txtConfigString.Size = new System.Drawing.Size(346, 20);
      this.txtConfigString.TabIndex = 1;
      // 
      // CCustomChannelPage
      // 
      this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
      this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
      this.Controls.Add(this.txtConfigString);
      this.Controls.Add(this.label1);
      this.Name = "CCustomChannelPage";
      this.Size = new System.Drawing.Size(490, 360);
      this.ResumeLayout(false);
      this.PerformLayout();

    }

    #endregion

    private System.Windows.Forms.Label label1;
    private System.Windows.Forms.TextBox txtConfigString;
  }
}
