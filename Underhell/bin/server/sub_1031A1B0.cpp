void __thiscall sub_1031A1B0(int this, int a2)
{
  int v3; // ecx
  float v4[3]; // [esp+Ch] [ebp-10h] BYREF
  float v5; // [esp+18h] [ebp-4h] BYREF

  if ( *(float *)(dword_106B31C8 + 12) >= (double)*(float *)(this + 4124) )
  {
    v3 = *(_DWORD *)(this + 4200);
    *(float *)(this + 4124) = *(float *)(dword_106B31C8 + 12) + 0.0099999998;
    sub_100BD6D0((void *)this, v3, (int)v4, 0, 0, 0);
    sub_10317730(this, v4, &flt_106F1CA8);
    if ( sub_10317800(this) )
    {
      v5 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
             dword_106B31E4,
             0.30000001,
             0.60000002)
         + *(float *)(dword_106B31C8 + 12)
         + 0.5;
      sub_1002ABA0((float *)(this + 1672), &v5);
    }
  }
}
