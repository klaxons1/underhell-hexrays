void __thiscall sub_10351280(_DWORD *this, int a2)
{
  int i; // edi
  __int64 v4; // [esp-8h] [ebp-18h]
  __int64 v5; // [esp-8h] [ebp-18h]
  __int64 v6; // [esp-8h] [ebp-18h]
  __int64 v7; // [esp-8h] [ebp-18h]

  for ( i = 0; i <= a2; ++i )
  {
    if ( !*((_BYTE *)this + i + 4072) )
    {
      *((_BYTE *)this + i + 4072) = 1;
      switch ( i )
      {
        case 0:
          HIDWORD(v4) = this;
          LODWORD(v4) = this;
          sub_1010DD80(this + 994, v4, 0.0);
          break;
        case 1:
          HIDWORD(v5) = this;
          LODWORD(v5) = this;
          sub_1010DD80(this + 1000, v5, 0.0);
          break;
        case 2:
          HIDWORD(v6) = this;
          LODWORD(v6) = this;
          sub_1010DD80(this + 1006, v6, 0.0);
          break;
        case 3:
          HIDWORD(v7) = this;
          LODWORD(v7) = this;
          sub_1010DD80(this + 1012, v7, 0.0);
          break;
        default:
          continue;
      }
    }
  }
}
