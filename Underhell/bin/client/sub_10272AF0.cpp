void __thiscall sub_10272AF0(_DWORD *this, int a2)
{
  int v3; // edi

  if ( *((_BYTE *)this + 228) )
  {
    v3 = a2 * this[55] + (*(int (__thiscall **)(_DWORD))(*(_DWORD *)this[54] + 772))(this[54]);
    (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)this[54] + 768))(this[54], v3);
    (*(void (__thiscall **)(_DWORD *, int))(*this + 828))(this, v3);
  }
}
