void __thiscall sub_10087050(int this, float *a2)
{
  float *v3; // ecx

  v3 = (float *)(this + 4);
  *v3 = *a2;
  v3[1] = a2[1];
  v3[2] = a2[2];
  off_103EDFEC();
  if ( *(_BYTE *)(this + 208) )
    sub_10086FF0((_DWORD *)this);
}
