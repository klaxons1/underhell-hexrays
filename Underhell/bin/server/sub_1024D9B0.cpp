void __thiscall sub_1024D9B0(int *this)
{
  int v2; // esi

  while ( this[3] )
  {
    v2 = *(_DWORD *)*this;
    if ( *(float *)(v2 + 4) > (double)*(float *)(dword_106B31C8 + 12) )
      break;
    sub_1024D710(this);
    *(_BYTE *)(v2 + 16) = 0;
    sub_1024D930((float *)v2);
    (***(void (__thiscall ****)(_DWORD))(v2 + 12))(*(_DWORD *)(v2 + 12));
  }
}
