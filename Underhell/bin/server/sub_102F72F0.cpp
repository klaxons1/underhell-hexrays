void __thiscall sub_102F72F0(int this)
{
  _DWORD *v2; // eax
  int v3; // eax
  _DWORD *v4; // eax
  int v5; // esi

  if ( *(float *)(dword_106B31C8 + 12) >= (double)*(float *)(this + 5704) )
  {
    *(float *)(this + 5704) = *(float *)(dword_106B31C8 + 12) + 1.0;
    if ( sub_10023D10((_DWORD *)this, 32) )
    {
      v2 = (_DWORD *)sub_1025FB50(1);
      if ( v2 )
      {
        v3 = sub_100CF460(v2);
        v4 = (_DWORD *)sub_103FA8C0(v3);
        v5 = (int)v4;
        if ( v4 )
        {
          if ( sub_102F6A60(this, v4) )
            sub_102F6B30(this, v5);
        }
      }
    }
  }
}
