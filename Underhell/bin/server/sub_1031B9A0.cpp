void __userpurge sub_1031B9A0(int a1@<ecx>, int a2@<edi>, int a3)
{
  float v4; // [esp+Ch] [ebp-4h] BYREF

  if ( *(float *)(dword_106B31C8 + 12) >= (double)*(float *)(a1 + 4124) )
  {
    *(float *)(a1 + 4124) = *(float *)(dword_106B31C8 + 12) + 0.0099999998;
    sub_1031B7D0(a1, a2, 1, 0, 0);
    if ( sub_10317800(a1) )
    {
      v4 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
             dword_106B31E4,
             0.30000001,
             0.60000002)
         + *(float *)(dword_106B31C8 + 12)
         + 0.5;
      sub_1002ABA0((float *)(a1 + 1672), &v4);
    }
  }
}
