int __thiscall sub_101BE5D0(char *this, int a2)
{
  _BYTE *v3; // edi
  void (__stdcall *v4)(int *, int *); // eax
  int v5; // eax
  int v7; // [esp-8h] [ebp-50h]
  int v8[3]; // [esp+2Ch] [ebp-1Ch] BYREF
  int v9[3]; // [esp+38h] [ebp-10h] BYREF
  int v10; // [esp+44h] [ebp-4h]

  v3 = this + 225;
  if ( this[225] )
  {
    (*(void (__thiscall **)(char *, char *))(*(_DWORD *)this + 480))(this, this + 225);
    *v3 = 0;
  }
  sub_101BE520((int)this);
  v4 = *(void (__stdcall **)(int *, int *))(**((_DWORD **)this + 106) + 204);
  v10 = *((_DWORD *)this + 106);
  v4(v8, v9);
  if ( (*((_DWORD *)this + 63) & 0x800) != 0 )
    sub_100DAE60((int)this);
  if ( (*((_DWORD *)this + 63) & 0x800) != 0 )
    sub_100DAE60((int)this);
  v7 = v10;
  v5 = (*(int (__thiscall **)(char *))(*(_DWORD *)this + 24))(this);
  sub_10217520(v5, v7, (int)(this + 580), (int)(this + 704), (int)v8, (int)v9, 1.0, 20.0, 1, 0, 1);
  if ( (*((_DWORD *)this + 63) & 0x800) != 0 )
    sub_100DAE60((int)this);
  if ( (*((_DWORD *)this + 63) & 0x800) != 0 )
    sub_100DAE60((int)this);
  sub_1013D530((float *)this + 145, (float *)this + 176, a2, (int)*((float *)this + 542), 0, 1, 0.0, 0, 0, -1);
  return sub_1025FAC0(this);
}
