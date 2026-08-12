__int16 __thiscall sub_10430DB0(int this, int a2)
{
  _DWORD *v2; // ebx
  unsigned __int16 v4; // ax
  int v5; // edi
  int v6; // edx
  int v8; // [esp+Ch] [ebp-4h] BYREF

  v2 = (_DWORD *)a2;
  sub_10430150((_WORD *)this, a2, (unsigned __int16 *)&v8, &a2);
  v4 = sub_10053540(this);
  v5 = v4;
  sub_10430CD0(this, v4, v8, a2);
  v6 = *(_DWORD *)(this + 4);
  ++*(_WORD *)(this + 18);
  if ( v6 + 12 * v5 != -8 )
    *(_DWORD *)(v6 + 12 * v5 + 8) = *v2;
  return v5;
}
