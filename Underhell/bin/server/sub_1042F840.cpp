__int16 __thiscall sub_1042F840(int this, unsigned __int16 *a2)
{
  unsigned __int16 *v2; // ebx
  unsigned __int16 v4; // ax
  int v5; // edi
  int v6; // edx
  int v8; // [esp+Ch] [ebp-4h] BYREF

  v2 = a2;
  sub_1042EB60(this, a2, (unsigned __int16 *)&v8, &a2);
  v4 = sub_10053540(this);
  v5 = v4;
  sub_1042F6B0(this, v4, v8, (char)a2);
  v6 = *(_DWORD *)(this + 4);
  ++*(_WORD *)(this + 18);
  if ( v6 + 12 * v5 != -8 )
    *(_DWORD *)(v6 + 12 * v5 + 8) = *(_DWORD *)v2;
  return v5;
}
