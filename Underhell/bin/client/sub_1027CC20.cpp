int __thiscall sub_1027CC20(int this, int a2, int a3, int a4)
{
  int *v5; // eax
  int *v6; // edi
  int v7; // edx
  int *v8; // esi
  int result; // eax

  v5 = (int *)sub_100DDA40(300);
  if ( v5 )
    v6 = sub_10279BB0(v5, (int (__thiscall ***)(_DWORD))this, a3, a2);
  else
    v6 = 0;
  sub_10236050((int (__thiscall ***)(void *, int))v6);
  v7 = *(_DWORD *)(this + 224);
  v8 = (int *)(this + 212);
  result = 36 * sub_1027C3A0(v8, v7);
  *(_DWORD *)(result + *v8) = a2;
  *(_DWORD *)(*v8 + result + 8) = v6;
  *(_DWORD *)(*v8 + result + 32) = a4;
  *(_BYTE *)(*v8 + result + 4) = 0;
  return result;
}
