void __thiscall sub_10180EC0(int this, _DWORD *a2)
{
  int v3; // eax
  float v4; // [esp+0h] [ebp-18h]
  __int64 v5; // [esp+4h] [ebp-14h]

  if ( !*(_BYTE *)(this + 848) && !*(_BYTE *)(this + 849) )
  {
    HIDWORD(v5) = this;
    LODWORD(v5) = *a2;
    sub_1010DD80((_DWORD *)(this + 800), v5, 0.0);
    v3 = *(_DWORD *)(this + 248);
    if ( (v3 & 1) != 0 )
    {
      sub_1025FAC0(this);
    }
    else if ( (v3 & 2) == 0 )
    {
      *(_BYTE *)(this + 849) = 1;
      v4 = sub_1010BAF0((_DWORD *)(this + 800)) + 0.001;
      sub_1010C7F0((float *)dword_10614CA8, this, "EnableRefire", v4, this, this, 0);
    }
  }
}
