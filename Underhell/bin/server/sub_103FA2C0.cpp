int __thiscall sub_103FA2C0(_DWORD *this, char a2)
{
  _DWORD *v2; // edi
  unsigned int v3; // eax
  int *v4; // ecx
  _DWORD *v5; // esi
  int v6; // ebx
  float *v7; // edi
  int *v8; // esi
  __int16 v9; // ax
  int result; // eax
  float v11; // [esp+1Ch] [ebp-101Ch]
  _DWORD v12[1024]; // [esp+30h] [ebp-1008h] BYREF
  int v13; // [esp+1030h] [ebp-8h]
  _DWORD *v14; // [esp+1034h] [ebp-4h]

  v2 = this;
  v3 = this[2068];
  v14 = this;
  if ( v3 != -1 )
  {
    v4 = &off_1061BE18[4 * (v3 & 0xFFF) + 1];
    if ( off_1061BE18[4 * (v3 & 0xFFF) + 2] == v3 >> 12 )
    {
      v5 = (_DWORD *)*v4;
      if ( *v4 )
      {
        sub_100E88A0(v5, *((_BYTE *)v2 + 72));
        v6 = 0;
        v13 = (*(int (__thiscall **)(_DWORD *, _DWORD *, int))(*v5 + 624))(v5, v12, 1024);
        if ( v13 > 0 )
        {
          v7 = (float *)(v2 + 20);
          do
          {
            v8 = (int *)v12[v6];
            if ( v8 )
            {
              (*(void (__thiscall **)(int *, int))(*v8 + 56))(v8, 1);
              (*(void (__thiscall **)(int *))(*v8 + 96))(v8);
              (*(void (__thiscall **)(int *, float))(*v8 + 112))(v8, v7[1024]);
              (*(void (__thiscall **)(int *, _DWORD, float *))(*v8 + 136))(v8, 0, v7);
              v9 = (*(int (__thiscall **)(int *))(*v8 + 76))(v8);
              (*(void (__thiscall **)(int *, int))(*v8 + 72))(v8, v9 & 0xFFFB);
              if ( a2 )
              {
                sub_101DBCA0(v8);
              }
              else
              {
                v11 = *(float *)(dword_106E0734 + 44) * 1.5;
                sub_103F99F0((int)v8, v11, 720.0);
              }
            }
            ++v6;
            ++v7;
          }
          while ( v6 < v13 );
          v2 = v14;
        }
      }
    }
  }
  v2[2068] = -1;
  result = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106BAFF4 + 120))(dword_106BAFF4, v2[2080]);
  v2[2080] = 0;
  return result;
}
