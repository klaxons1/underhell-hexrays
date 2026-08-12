void __thiscall sub_1017B390(_DWORD *this, _DWORD *a2)
{
  bool v2; // zf
  int *v3; // eax
  int v4; // esi
  int v5; // edx
  __int64 v6; // [esp-8h] [ebp-10h]
  __int64 v7; // [esp-8h] [ebp-10h]

  v2 = this[213] == 0;
  v3 = (int *)this[214];
  v4 = this[212];
  this[215] = 0;
  if ( v2 )
  {
    if ( !v3 )
    {
LABEL_12:
      HIDWORD(v6) = this;
      LODWORD(v6) = *a2;
      sub_1010DD80(this + 200, v6, 0.0);
      return;
    }
    if ( v3[4] == 5 )
      v4 = *v3;
    else
      v4 = 0;
  }
  if ( !v3 )
    goto LABEL_12;
  while ( 1 )
  {
    v5 = v3[4] == 5 ? *v3 : 0;
    if ( v5 != v4 )
      break;
    v3 = (int *)v3[6];
    if ( !v3 )
      goto LABEL_12;
  }
  HIDWORD(v7) = this;
  LODWORD(v7) = *a2;
  sub_1010DD80(this + 206, v7, 0.0);
}
