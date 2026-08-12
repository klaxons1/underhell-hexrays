void __thiscall sub_1023C950(_DWORD *this)
{
  int v1; // ebx
  int v3; // eax
  int v4; // edi
  int v5; // ecx
  float *v6; // eax
  int v7; // ecx

  v1 = 0;
  this[200] = 0;
  this[201] = -1;
  v3 = *(_DWORD *)(dword_106B31C8 + 20);
  v4 = 64;
  if ( v3 > 1 )
  {
    v4 = v3 + 32;
    if ( v3 + 32 > 128 )
      v4 = 128;
  }
  if ( v3 + 16 > v4 )
    Warning("CSoundEnt pool is low on sounds due to high number of clients.\n");
  v5 = 0;
  if ( v4 > 0 )
  {
    v6 = (float *)(this + 214);
    do
    {
      *(v6 - 2) = flt_106F1CA8;
      ++v5;
      v6 += 13;
      *(v6 - 14) = flt_106F1CAC;
      *(v6 - 13) = flt_106F1CB0;
      *(v6 - 20) = 0.0;
      *(v6 - 22) = 0.0;
      *(v6 - 21) = 0.0;
      *((_BYTE *)v6 - 66) = 0;
      *(v6 - 18) = 0.0;
      *(v6 - 19) = 0.0;
      *((_WORD *)v6 - 34) = v5;
    }
    while ( v5 < v4 );
  }
  LOWORD(this[13 * v5 + 197]) = -1;
  if ( *(int *)(dword_106B31C8 + 20) > 0 )
  {
    while ( 1 )
    {
      v7 = this[200];
      if ( v7 == -1 )
        break;
      this[200] = SLOWORD(this[13 * v7 + 210]);
      LOWORD(this[13 * v7 + 210]) = *((_WORD *)this + 402);
      this[201] = v7;
      BYTE2(this[13 * v7 + 210]) = 1;
      if ( ++v1 >= *(_DWORD *)(dword_106B31C8 + 20) )
        return;
    }
    if ( *(int *)(dword_106CE684 + 48) >= 2 )
      Msg("Free Sound List is full!\n");
    DevMsg("Could not AllocSound() for Client Reserve! (DLL)\n");
  }
}
