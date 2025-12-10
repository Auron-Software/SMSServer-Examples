
namespace CustomMessageType
{
  partial class CCustomMessageDetails
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
      this.txtTextField = new System.Windows.Forms.TextBox();
      this.CustomField = new System.Windows.Forms.Label();
      this.SuspendLayout();
      // 
      // txtTextField
      // 
      this.txtTextField.Location = new System.Drawing.Point(66, 9);
      this.txtTextField.Name = "txtTextField";
      this.txtTextField.Size = new System.Drawing.Size(199, 20);
      this.txtTextField.TabIndex = 0;
      // 
      // CustomField
      // 
      this.CustomField.AutoSize = true;
      this.CustomField.Location = new System.Drawing.Point(6, 10);
      this.CustomField.Name = "CustomField";
      this.CustomField.Size = new System.Drawing.Size(45, 10);
      this.CustomField.TabIndex = 1;
      this.CustomField.Text = "Test Field:";
      // 
      // CCustomMessageDetails
      // 
      this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
      this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
      this.Controls.Add(this.CustomField);
      this.Controls.Add(this.txtTextField);
      this.Name = "CCustomMessageDetails";
      this.Size = new System.Drawing.Size(646, 380);
      this.ResumeLayout(false);
      this.PerformLayout();

    }

    #endregion

    private System.Windows.Forms.TextBox txtTextField;
    private System.Windows.Forms.Label CustomField;
  }
}
