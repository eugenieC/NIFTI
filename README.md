# Near-Infrared Fluorescence Tumor Imaging (NIFTI)

NIFTI is to address the late diagnosis of Soft Tissue Sarcoma (STS) - a rare muscle cancer. STS diagnosis is difficult with initial screening tools like ultrasounds. It is only when patients undergo Positron Emission Tomography (PET) in combination with Computed Tomography (CT) or Magnetic Resonance Imaging (MRI) does the tumor’s histology become clear enough for a diagnosis.
					
Patients who receive uncertain diagnoses through initial screening may hesitate to undergo further screening, making them vulnerable to delayed diagnoses. While NIFTI isn’t intended to replace CTs or MRIs, its goal is to encourage patients to seek additional examination, accelerating the diagnosis process.
					
NIFTI has potential as a diagnostic tool for diseases beyond STS. Given its capability to utilize near-infrared light to penetrate multiple layers of skin, it could serve as an effective diagnostic tool for various muscle cancers. NIFTI utilizes tumor vascularization to make a diagnosis. Because of the high density of blood vessels in vascularized tumors, NIFTI can detect the abnormally high fluorescent signal around malignant tumors to make a diagnosis. 


![image](https://github.com/eugenieC/NIFTI/assets/40417846/f4f2a0e2-7fff-4a8a-a034-023841585ae9)


In a clinical setting, Figure above illustrates how NIFTI is used. First, the patient receives an intravenous injection of Indocyanine Green (ICG). ICG is a fluorescent dye utilized in surgery with a peak excitation of 780nm and a peak emission of 810nm. Following this, the near-infrared emitting diodes in NIFTI excite ICG, leading it to excite at 810nm. Finally, the near-infrared Arduino sensor detects these emissions from ICG, compares the emission volume to a diagnostic curve, and makes a diagnosis. 

![image](https://github.com/eugenieC/NIFTI/assets/40417846/405f3e56-9bac-4004-a6a9-68679af3294d)

Above prototype of NIFTI device is created using breadboard and LED diodes. The c++ code in this repository is to run the device using the Arduino IDE app.


