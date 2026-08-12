void __thiscall sub_10070120(float *this)
{
  int v2; // eax
  int v3; // edi

  sub_100E0780();
  *((_DWORD *)this + 205) = sub_10085FA0(*((_DWORD *)this + 213));
  if ( *((_DWORD *)this + 209) == -1 )
    this[214] = NAN;
  else
    *((_DWORD *)this + 214) = sub_10085FA0(*((_DWORD *)this + 209));
  v2 = *((_DWORD *)this + 205);
  if ( v2 >= 0
    && v2 < *(_DWORD *)(dword_106935D8 + 4)
    && (v3 = *(_DWORD *)(*(_DWORD *)(dword_106935D8 + 8) + 4 * v2)) != 0 )
  {
    this[201] = *(float *)(v3 + 4);
    this[202] = *(float *)(v3 + 8);
    this[203] = *(float *)(v3 + 12);
    (*(void (__thiscall **)(float *, _DWORD *, _DWORD, _DWORD))(*(_DWORD *)this + 416))(
      this,
      (_DWORD *)this + 201,
      0,
      0);
    *(_DWORD *)(v3 + 96) = this;
  }
  else if ( *((int *)this + 213) > 0 )
  {
    DevMsg("Warning: AI hint has incorrect or no AI node\n");
  }
}
