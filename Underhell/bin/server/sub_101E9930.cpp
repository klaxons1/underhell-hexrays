void __thiscall sub_101E9930(int this, float a2, int *a3, float *a4)
{
  if ( a2 != 0.0 && (*(unsigned __int8 (__thiscall **)(float))(*(_DWORD *)LODWORD(a2) + 876))(COERCE_FLOAT(LODWORD(a2))) )
  {
    if ( (*(int (__thiscall **)(float))(*(_DWORD *)LODWORD(a2) + 1248))(COERCE_FLOAT(LODWORD(a2))) == 1 )
    {
      *(_BYTE *)(this + 3371) = 0;
    }
    else if ( (*(int (__thiscall **)(float))(*(_DWORD *)LODWORD(a2) + 1248))(COERCE_FLOAT(LODWORD(a2))) == 4 )
    {
      *(_BYTE *)(this + 3372) = 0;
    }
  }
  sub_100CDBD0((unsigned int *)this, a2, a3, a4);
}
