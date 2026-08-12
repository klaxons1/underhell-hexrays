char __thiscall sub_1009A130(int this, int *a2)
{
  int v3; // edi
  int v4; // eax
  int v6; // [esp+8h] [ebp-8h] BYREF

  v6 = *a2;
  v3 = (unsigned __int16)sub_10096190((_WORD *)this, (int)&v6);
  if ( (_WORD)v3 == 0xFFFF )
    return 0;
  sub_100976D0(this, v3);
  v4 = 2 * v3;
  *(_WORD *)(*(_DWORD *)(this + 4) + 8 * v4) = v3;
  *(_WORD *)(*(_DWORD *)(this + 4) + 8 * v4 + 2) = *(_WORD *)(this + 20);
  *(_WORD *)(this + 20) = v3;
  --*(_WORD *)(this + 18);
  return 1;
}
