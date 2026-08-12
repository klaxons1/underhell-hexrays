int __thiscall sub_1010EFE0(_DWORD *this, int a2, int a3, void *a4, int a5)
{
  int result; // eax
  int v7; // ebx
  _DWORD *v8; // eax
  int v9; // [esp-4h] [ebp-58h]
  _BYTE v10[48]; // [esp+Ch] [ebp-48h] BYREF
  _BYTE v11[12]; // [esp+3Ch] [ebp-18h] BYREF
  float v12[3]; // [esp+48h] [ebp-Ch] BYREF

  nullsub_1(a2, a3, (int)a4, a5);
  if ( !this[484] && (*(int (__thiscall **)(_DWORD *))(*this + 36))(this) )
    sub_10026520((int)(this - 1));
  result = this[484];
  if ( result && *(_DWORD *)result )
  {
    if ( *(_DWORD *)(*(_DWORD *)result + 260) )
      memset(a4, 0, 4 * a3);
    result = this[307];
    if ( result > 0 )
    {
      result = (*(int (__thiscall **)(_DWORD *, int, _BYTE *))(*this + 144))(this, result, v10);
      if ( (_BYTE)result )
      {
        v12[0] = 1000.0;
        v12[1] = 0.0;
        v12[2] = 0.0;
        sub_101ED860(v12, v10, v11);
        v7 = *(_DWORD *)dword_10413160;
        v9 = (*(int (__thiscall **)(_DWORD *, _BYTE *))(*this + 44))(this, v11);
        v8 = sub_10001EA0(this - 1);
        return (*(int (__thiscall **)(int, _DWORD *, int))(v7 + 8))(dword_10413160, v8, v9);
      }
    }
  }
  return result;
}
