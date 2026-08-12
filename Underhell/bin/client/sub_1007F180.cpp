int __thiscall sub_1007F180(int *this)
{
  int v2; // ebx
  int v3; // eax
  int v4; // edx
  int v5; // eax
  int result; // eax
  int i; // ebx
  int v8; // edi
  int v9; // eax
  int v10; // ecx
  _DWORD *v11; // edi

  sub_1007D930(this + 7, 1024);
  sub_1007DAF0(this + 25, 1024);
  sub_1007DA80(this + 34, 1024);
  sub_1007DAF0(this + 45, 256);
  sub_1007DA80(this + 54, 256);
  sub_1007DAF0(this + 65, 256);
  sub_1007DAF0(this + 74, 256);
  sub_1007D9A0(this + 85, 256);
  v2 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_1041315C + 164))(dword_1041315C);
  if ( this[3] < v2 && this[4] >= 0 )
  {
    v3 = this[2];
    this[3] = v2;
    v4 = *g_pMemAlloc;
    if ( v3 )
      v5 = (*(int (__stdcall **)(int, int))(v4 + 12))(v3, 16 * v2);
    else
      v5 = (*(int (__stdcall **)(int))(v4 + 4))(16 * v2);
    this[2] = v5;
  }
  this[6] = this[2];
  result = 0;
  for ( i = v2 - 1; i >= 0; --i )
  {
    v8 = this[5];
    v9 = this[3];
    if ( v8 + 1 > v9 )
      sub_1007CFB0(this + 2, v8 - v9 + 1);
    ++this[5];
    v10 = this[2];
    result = this[5] - v8 - 1;
    this[6] = v10;
    if ( result > 0 )
      result = (int)memcpy((void *)(16 * v8 + v10 + 16), (const void *)(16 * v8 + v10), 16 * result);
    v11 = (_DWORD *)(this[2] + 16 * v8);
    if ( v11 )
    {
      *v11 = -1;
      v11[1] = 0;
      v11[2] = -1;
      result = 0;
      v11[3] = 0;
    }
  }
  return result;
}
