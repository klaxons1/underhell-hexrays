void __thiscall sub_10250380(_DWORD *this, float *a2, float *a3, int a4, float a5)
{
  int v5; // eax

  if ( (this[62] & 0x10) == 0 )
  {
    v5 = this[228];
    if ( v5 == 1 )
    {
      sub_1024F150((int)this, (int)a2, (int)a3, a4, a5);
    }
    else if ( (unsigned int)(v5 - 2) <= 1 )
    {
      sub_1024F350((int)this, v5, a2, a3, a4, a5);
    }
  }
}
