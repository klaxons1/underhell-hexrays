char *__thiscall sub_100E2FF0(_DWORD *this, float Str)
{
  char *result; // eax
  _DWORD *v3; // edi
  int *v4; // esi
  int v5; // eax
  int v6; // ebx
  int v7; // edi
  int v8; // ebx
  int v9; // eax
  int v10; // edi
  int v11; // eax
  int v12; // ecx
  int v13; // eax
  int v14; // ecx
  float v15; // edx
  char v16[128]; // [esp+4h] [ebp-120h] BYREF
  char String1[128]; // [esp+84h] [ebp-A0h] BYREF
  _BYTE v18[4]; // [esp+104h] [ebp-20h] BYREF
  _BYTE v19[4]; // [esp+108h] [ebp-1Ch] BYREF
  _BYTE v20[8]; // [esp+10Ch] [ebp-18h] BYREF
  int v21; // [esp+114h] [ebp-10h]
  float v22; // [esp+118h] [ebp-Ch]
  _DWORD *v23; // [esp+11Ch] [ebp-8h]
  char *v24; // [esp+120h] [ebp-4h]

  result = (char *)LODWORD(Str);
  v3 = this;
  v23 = this;
  if ( Str != 0.0 )
  {
    v4 = this + 41;
    while ( 1 )
    {
      Str = 0.0;
      v24 = sub_100654F0(result, String1, 128, v16, 128, &Str);
      if ( 0.0 != Str )
        Str = Str + *(float *)(dword_106B31C8 + 12);
      v5 = sub_100DB0C0(v3, String1);
      if ( v5 == -1 )
      {
        v8 = *(_DWORD *)sub_10162BE0(v20, String1);
        v9 = *(_DWORD *)sub_10162BE0(v18, v16);
        v22 = Str;
        v10 = v4[3];
        v21 = v9;
        v11 = v4[1];
        if ( v10 + 1 > v11 )
          sub_101924C0(v10 - v11 + 1);
        ++v4[3];
        v12 = *v4;
        v13 = v4[3] - v10 - 1;
        v4[4] = *v4;
        if ( v13 > 0 )
          memcpy((void *)(v12 + 12 * v10 + 12), (const void *)(v12 + 12 * v10), 12 * v13);
        result = (char *)(*v4 + 12 * v10);
        if ( result )
        {
          v14 = v21;
          v15 = v22;
          *(_DWORD *)result = v8;
          *((_DWORD *)result + 1) = v14;
          *((float *)result + 2) = v15;
        }
      }
      else
      {
        v6 = *v4;
        v7 = 12 * v5;
        result = *(char **)sub_10162BE0(v19, v16);
        *(_DWORD *)(v6 + v7 + 4) = result;
        *(float *)(*v4 + v7 + 8) = Str;
      }
      if ( !v24 )
        break;
      result = v24;
      v3 = v23;
    }
  }
  return result;
}
