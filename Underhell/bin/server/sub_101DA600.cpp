unsigned __int16 __thiscall sub_101DA600(_WORD *this, int a2)
{
  int v2; // esi
  unsigned __int16 result; // ax
  int v4; // ebx
  int v5; // ecx
  int v6; // [esp+8h] [ebp-Ch] BYREF
  _WORD *v7; // [esp+10h] [ebp-4h]
  int v8; // [esp+1Ch] [ebp+8h]

  v7 = this;
  v2 = (int)(this + 14);
  v6 = a2;
  result = sub_101D4050(this + 14, (int)&v6);
  v4 = result;
  if ( result != 0xFFFF )
  {
    v5 = *(_DWORD *)(*((_DWORD *)v7 + 8) + 16 * result + 12);
    v8 = v5;
    if ( v5 )
    {
      sub_102375F0(v5);
      sub_10184660(v8);
    }
    sub_101D9460(v2, v4);
    *(_WORD *)(*(_DWORD *)(v2 + 4) + 16 * v4) = v4;
    *(_WORD *)(*(_DWORD *)(v2 + 4) + 16 * v4 + 2) = *(_WORD *)(v2 + 20);
    result = -1;
    --*(_WORD *)(v2 + 18);
    *(_WORD *)(v2 + 20) = v4;
  }
  return result;
}
