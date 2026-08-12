void __thiscall sub_1042D610(_BYTE *this, int a2)
{
  int v3; // edi
  int v4; // eax
  int v5; // edx

  v3 = a2 + 1;
  if ( *((int *)this + 2) < 0 )
  {
    if ( (this[21] & 2) != 0 && *((_DWORD *)this + 1) < v3 )
      sub_1042D510((int)this, 0);
    else
      v3 = a2;
  }
  if ( *((_DWORD *)this + 1) < v3 && *((int *)this + 2) >= 0 )
  {
    v4 = *(_DWORD *)this;
    *((_DWORD *)this + 1) = v3;
    v5 = *g_pMemAlloc;
    if ( v4 )
      *(_DWORD *)this = (*(int (__stdcall **)(int, int))(v5 + 12))(v4, v3);
    else
      *(_DWORD *)this = (*(int (__stdcall **)(int))(v5 + 4))(v3);
  }
}
