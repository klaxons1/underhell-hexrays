void __thiscall sub_10055450(float *this, int a2)
{
  int v2; // esi
  int v3; // edx

  if ( 0.0 != this[132] )
  {
    v2 = *(_DWORD *)(a2 + 4);
    v3 = *(_DWORD *)(v2 + 8);
    if ( v3 != v2 + 4 )
    {
      do
      {
        *(_DWORD *)(a2 + 16) = *(_DWORD *)(v3 + 4);
        *(float *)(v3 + 28) = *(float *)(v3 + 24) * 0.0174532925199433 * this[128] * *(float *)(a2 + 8)
                            + *(float *)(v3 + 28);
        v3 = *(_DWORD *)(a2 + 16);
      }
      while ( v3 != *(_DWORD *)(a2 + 4) + 4 );
    }
  }
}
