int __thiscall sub_100D9B60(float *this)
{
  int result; // eax
  int v3; // edi
  int v4; // ebx
  int v5; // edx
  int v6; // ecx
  int v7; // edx
  int (__thiscall *v8)(float *); // eax
  double v9; // st7
  int v10; // [esp+4h] [ebp-14h] BYREF
  int v11; // [esp+8h] [ebp-10h] BYREF
  int v12; // [esp+Ch] [ebp-Ch] BYREF
  int v13; // [esp+10h] [ebp-8h] BYREF
  int v14; // [esp+14h] [ebp-4h] BYREF

  result = dword_10433B84;
  if ( *(_DWORD *)(dword_10433B84 + 48) && *(_DWORD *)(dword_10433944 + 48) )
  {
    result = (*(int (__thiscall **)(int, int *, int *))(*(_DWORD *)dword_1041315C + 20))(dword_1041315C, &v12, &v11);
    v3 = v12 >> 1;
    v4 = v11 >> 1;
    if ( *((_BYTE *)this + 49) )
    {
      sub_10131F10(&v14, &v13);
      if ( v14 <= v12 - 1 )
        v5 = v14 < 0 ? 0 : v14;
      else
        v5 = v12 - 1;
      v6 = v11 - 1;
      v14 = v5;
      if ( v13 <= v11 - 1 )
        v6 = v13 < 0 ? 0 : v13;
      v13 = v6;
      result = sub_10131F30(v5, v6);
    }
    if ( !*((_BYTE *)this + 184) )
    {
      result = (*(int (__thiscall **)(int))(*(_DWORD *)dword_1047CA6C + 404))(dword_1047CA6C);
      if ( (_BYTE)result )
      {
        sub_10131F10(&v13, &v10);
        v7 = *(_DWORD *)this;
        v14 = v13 - v3;
        v8 = *(int (__thiscall **)(float *))(v7 + 120);
        v9 = (double)(v13 - v3) + this[13];
        v14 = v10 - v4;
        this[13] = v9;
        this[14] = (double)v14 + this[14];
        return v8(this);
      }
    }
  }
  return result;
}
