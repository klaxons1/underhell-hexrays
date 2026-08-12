void __userpurge sub_1024DBF0(int a1@<ecx>, int a2@<esi>, int *a3)
{
  _DWORD *v3; // eax
  _BYTE v4[80]; // [esp+Ch] [ebp-50h] BYREF

  if ( *(float *)(a1 + 956) <= (double)*(float *)(dword_106B31C8 + 12) )
  {
    *(float *)(a1 + 956) = *(float *)(dword_106B31C8 + 12) + 0.5;
    v3 = (_DWORD *)sub_10248110((int)v4, a1, a1, *(float *)(a1 + 952), 1, 0);
    sub_100D9E70(a3, a2, v3);
  }
}
