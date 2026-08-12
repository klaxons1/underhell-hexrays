void __thiscall sub_102C73D0(_DWORD *this, int a2)
{
  int v3; // ebx
  int v4; // eax
  _DWORD *v5; // ecx
  __int64 v6; // [esp-8h] [ebp-18h]
  __int64 v7; // [esp-8h] [ebp-18h]

  v3 = this[282];
  if ( a2 >= v3 )
  {
    if ( a2 != v3 && a2 == (int)(double)(int)this[287] )
    {
      v5 = this + 306;
      goto LABEL_10;
    }
  }
  else
  {
    v4 = (int)((double)(int)this[287] * 0.5);
    if ( a2 <= v4 && v3 > v4 )
    {
      HIDWORD(v6) = this;
      LODWORD(v6) = this;
      sub_1010DD80(this + 294, v6, 0.0);
    }
    if ( a2 <= 0 )
    {
      v5 = this + 300;
LABEL_10:
      HIDWORD(v7) = this;
      LODWORD(v7) = this;
      sub_1010DD80(v5, v7, 0.0);
    }
  }
  this[282] = a2;
}
