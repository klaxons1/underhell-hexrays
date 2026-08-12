__int16 __thiscall sub_1016F6E0(int this, int a2)
{
  _DWORD *v2; // ebx
  unsigned __int16 v4; // ax
  int v5; // edi
  int v6; // edx
  int v8; // [esp+Ch] [ebp-4h] BYREF

  v2 = (_DWORD *)a2;
  sub_1016CC00((_WORD *)this, a2, (unsigned __int16 *)&v8, &a2);
  v4 = sub_1016CCF0(this);
  v5 = v4;
  sub_1016E1F0(this, v4, v8, a2);
  v6 = *(_DWORD *)(this + 4);
  ++*(_WORD *)(this + 18);
  if ( v6 + 20 * v5 != -8 )
  {
    *(_DWORD *)(v6 + 20 * v5 + 8) = *v2;
    *(_DWORD *)(v6 + 20 * v5 + 12) = v2[1];
    *(_DWORD *)(v6 + 20 * v5 + 16) = v2[2];
  }
  return v5;
}
