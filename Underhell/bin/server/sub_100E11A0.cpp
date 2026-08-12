void __thiscall sub_100E11A0(int this, float *a2)
{
  int *v3; // ecx
  float v4; // [esp+1Ch] [ebp+8h]

  if ( *(float *)(this + 728) != *a2 || *(float *)(this + 732) != a2[1] || *(float *)(this + 736) != a2[2] )
  {
    sub_100E98A0(2);
    sub_100DB5E0((float *)(this + 728), a2);
    v4 = *(float *)(dword_106B31C8 + 12);
    if ( *(_DWORD *)(this + 128) != LODWORD(v4) )
    {
      if ( *(_BYTE *)(this + 84) )
      {
        *(_BYTE *)(this + 88) |= 1u;
        *(float *)(this + 128) = v4;
      }
      else
      {
        v3 = *(int **)(this + 24);
        if ( v3 )
          sub_100194B0(v3, 128);
        *(float *)(this + 128) = v4;
      }
    }
  }
}
