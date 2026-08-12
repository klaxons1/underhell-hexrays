__int16 __thiscall sub_100E3BF0(int this, int a2)
{
  int v2; // ebx
  unsigned __int16 v4; // ax
  int v5; // edi
  int v6; // edx
  __int16 result; // ax
  int v8; // [esp+Ch] [ebp-4h] BYREF

  v2 = a2;
  sub_100DB960((_WORD *)this, a2, (unsigned __int16 *)&v8, &a2);
  v4 = sub_100DBBB0(this);
  v5 = v4;
  sub_100E1A80(this, v4, v8, a2);
  v6 = *(_DWORD *)(this + 4);
  ++*(_WORD *)(this + 18);
  result = v5;
  if ( v6 + 24 * v5 != -8 )
  {
    sub_10431220(v2);
    return v5;
  }
  return result;
}
