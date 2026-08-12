int __usercall sub_1025B4C0@<eax>(int a1@<ecx>, double a2@<st0>)
{
  float *v3; // ebx
  float *v4; // eax
  double v5; // st7
  float v7; // [esp+8h] [ebp-2Ch]
  float v8; // [esp+Ch] [ebp-28h]
  float v9; // [esp+Ch] [ebp-28h]
  _BYTE v10[12]; // [esp+1Ch] [ebp-18h] BYREF
  _BYTE v11[12]; // [esp+28h] [ebp-Ch] BYREF

  (*(void (__thiscall **)(int, _BYTE *, _BYTE *))(*(_DWORD *)(a1 + 320) + 60))(a1 + 320, v10, v11);
  v3 = (float *)sub_10262460(v10, v11);
  if ( v3 )
  {
    v4 = (float *)(*(int (__thiscall **)(float *))(*(_DWORD *)v3 + 576))(v3);
    sub_10111AB0((_BYTE *)(a1 + 320), v4);
    v8 = a2 * 3.0;
    sub_101E2860(v3, v8);
  }
  v5 = *(float *)(dword_106B31C8 + 12) - *(float *)(a1 + 1108);
  if ( v5 >= 0.5 )
  {
    v9 = v5;
    sub_10258BC0(a1, v9);
  }
  v7 = *(float *)(dword_106B31C8 + 12) + 0.25;
  return sub_100EC4A0((int *)a1, v7, 0);
}
