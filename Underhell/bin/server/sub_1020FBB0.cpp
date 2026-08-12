void __thiscall sub_1020FBB0(_DWORD *this, char *String2)
{
  int v3; // eax
  const char *v4; // eax
  __int64 v5; // [esp-8h] [ebp-14h]

  if ( String2 )
  {
    v3 = sub_100BDF40((int)this, String2);
    if ( v3 <= -1 )
    {
      v4 = sub_100D6390(this);
      Warning("Dynamic prop %s: no sequence named:%s\n", v4, String2);
      sub_100C1170((int)this, 0);
    }
    else
    {
      sub_1020D850((int)this, v3);
      HIDWORD(v5) = this;
      LODWORD(v5) = 0;
      sub_1010DD80(this + 362, v5, 0.0);
    }
  }
}
