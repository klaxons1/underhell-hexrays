_DWORD *__thiscall sub_10184D80(int *this, int a2)
{
  int v4; // ebx
  char *v5; // eax
  int v6; // ebx
  int v7; // eax
  int v8; // eax
  int v9; // ecx
  _DWORD *result; // eax
  _DWORD v11[2]; // [esp+Ch] [ebp-8h] BYREF
  _DWORD *v12; // [esp+1Ch] [ebp+8h]

  v11[0] = this[100];
  v4 = sub_100DDA40(392);
  if ( v4 )
  {
    v5 = (char *)sub_1022B4C0("name", (int)Locale);
    v12 = (_DWORD *)sub_1026D6B0(v4, (int)this, v5);
  }
  else
  {
    v12 = 0;
  }
  v6 = *(_DWORD *)this[100];
  v7 = sub_1022B4C0("label", (int)Locale);
  v11[1] = (*(int (__thiscall **)(int, int, int *, _DWORD *, int))(v6 + 832))(this[100], v7, this, v12, a2);
  sub_100F9FF0(this + 172, this[175], v11);
  if ( this[170] >= this[168] )
    sub_1010AFF0(this + 167, 1);
  ++this[170];
  v8 = this[167];
  v9 = this[170];
  this[171] = v8;
  result = (_DWORD *)(v8 + 4 * v9 - 4);
  if ( result )
  {
    *result = this[100];
    result = v12;
  }
  this[100] = (int)v12;
  return result;
}
