void __thiscall sub_10347850(int this, char a2)
{
  int v3; // eax
  _BYTE *v4; // ecx
  int v5; // ecx
  unsigned int v6; // eax
  int v7; // [esp+4h] [ebp-8h]

  if ( a2 )
  {
    if ( !*(_BYTE *)(this + 3637) )
    {
      *(_BYTE *)(this + 3637) = 1;
      *(_DWORD *)(this + 3656) = 0;
      *(float *)(this + 3652) = *(float *)(dword_106B31C8 + 12) + 0.4;
      sub_1023C380((_DWORD *)this, (int)"NPC_CombineCamera.Angry", 0.0, 0);
      v3 = *(_DWORD *)(this + 3684);
      if ( v3 )
      {
        v4 = (_BYTE *)(v3 + 116);
        v7 = HIBYTE(*(_DWORD *)(v3 + 116));
        if ( *(_BYTE *)(this + 3637) )
          sub_1005C620(v4, 255, 0, 0, v7);
        else
          sub_1005C620(v4, 0, 255, 0, v7);
        sub_10242820(*(_DWORD *)(this + 3684), 164, 0.1);
        sub_102428B0(*(_DWORD *)(this + 3684), 0.40000001, 0.1);
      }
    }
  }
  else if ( *(_BYTE *)(this + 3637) )
  {
    v5 = *(_DWORD *)(this + 3688);
    *(_BYTE *)(this + 3637) = 0;
    sub_10242820(v5, 0, 0.0);
    v6 = *(_DWORD *)(this + 3644);
    if ( v6 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 3644) & 0xFFF) + 2] != v6 >> 12 )
      sub_10347530(this, 0);
    else
      sub_10347530(this, off_1061BE18[4 * (*(_DWORD *)(this + 3644) & 0xFFF) + 1] != 0);
  }
}
