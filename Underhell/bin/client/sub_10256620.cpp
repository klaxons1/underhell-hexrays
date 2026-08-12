int __thiscall sub_10256620(int *this, const unsigned __int16 *a2)
{
  int v2; // ebp
  unsigned __int16 *v4; // ebx
  _DWORD **v5; // esi
  int v6; // eax
  _DWORD *v7; // ecx
  int v8; // eax
  int v10; // [esp+8h] [ebp-8h]
  int v11; // [esp+Ch] [ebp-4h]

  v2 = 0;
  if ( !a2 )
    a2 = (const unsigned __int16 *)&unk_10302674;
  v11 = wcslen(a2);
  this[58] = 0;
  sub_10254DF0(this + 55, v11);
  v10 = 0;
  if ( v11 > 0 )
  {
    v4 = (unsigned __int16 *)a2;
    do
    {
      if ( *v4 == 13 )
      {
        ++v10;
      }
      else
      {
        sub_10255420(this + 55, this[58], v4);
        (*(void (__thiscall **)(int *, _DWORD, int))(*this + 992))(this, *v4, v2 - v10);
      }
      ++v2;
      ++v4;
    }
    while ( v2 < v11 );
  }
  (*(void (__thiscall **)(int *))(*this + 824))(this);
  (*(void (__thiscall **)(int *))(*this + 852))(this);
  v5 = (_DWORD **)(this + 65);
  *((_BYTE *)this + 340) = 0;
  this[99] = 0;
  this[68] = 0;
  v6 = this[66];
  if ( v6 < 1 )
    sub_1010AFF0(this + 65, 1 - v6);
  ++this[68];
  v7 = *v5;
  v8 = this[68] - 1;
  this[69] = this[65];
  if ( v8 > 0 )
    memcpy(v7 + 1, v7, 4 * v8);
  if ( *v5 )
    **v5 = 999999;
  return (*(int (__thiscall **)(int *, _DWORD, _DWORD))(*this + 244))(this, 0, 0);
}
