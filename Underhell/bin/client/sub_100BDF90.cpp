void __thiscall sub_100BDF90(_DWORD *this)
{
  int v2; // eax
  int v3; // edi
  double v4; // st7
  int v5; // eax
  double v6; // st7

  v2 = sub_100422D0();
  v3 = v2;
  this[53] = v2;
  if ( v2 )
  {
    if ( *(_BYTE *)(v2 + 5286) || *(_BYTE *)(v2 + 3449) || this[52] != *(_DWORD *)(v2 + 5292) )
    {
      *((_BYTE *)this + 207) = 1;
      sub_102366F0(255);
    }
    else
    {
      *((_BYTE *)this + 207) = 0;
    }
    if ( !*((_BYTE *)this + 207) )
    {
      v4 = (double)sub_10236700(this) - 0.1;
      sub_102366F0((int)v4);
    }
    v5 = sub_10236700(this);
    if ( v5 <= 255 )
    {
      if ( v5 < 0 )
        sub_102366F0(0);
    }
    else
    {
      sub_102366F0(255);
    }
    (*(void (__stdcall **)(bool))(*this + 124))(*(_DWORD *)(dword_10430E6C + 48) != 0);
    v6 = 0.0;
    if ( *(float *)(v3 + 5212) > 0.0 )
      v6 = *(float *)(v3 + 5212);
    if ( *((float *)this + 55) != v6 )
    {
      *((float *)this + 55) = v6;
      sub_1023E950(this);
    }
  }
}
