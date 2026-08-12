char __thiscall sub_1007EE30(_DWORD **this, int a2, float a3, int a4)
{
  char *v5; // eax
  _DWORD *v7; // eax
  void ***v8; // edx
  int v9; // eax
  int v10; // edi
  float *v11; // edi
  char Buffer[256]; // [esp+10h] [ebp-108h] BYREF
  void **v13; // [esp+110h] [ebp-8h] BYREF
  int v14; // [esp+114h] [ebp-4h]

  if ( *(_DWORD *)(dword_106934A4 + 48) )
  {
    v5 = sub_1001E280(Buffer, "[Nav] %s", "Set random goal\n");
    sub_10029660(this[1], (int)v5);
  }
  ((void (__thiscall *)(_DWORD **))(*this)[11])(this);
  if ( (int)this[8][1] <= 0 )
    return 0;
  v7 = this[1];
  v8 = 0;
  v13 = &CAI_NavInHintGroupFilter::`vftable';
  v14 = 0;
  if ( v7[702] )
  {
    v14 = v7[702];
    v8 = &v13;
  }
  v9 = sub_10085990(v7, a2, 1, v8);
  if ( v9 == -1 )
    return 0;
  v10 = sub_10090140(v9, a3, a4);
  if ( !v10 )
    return 0;
  sub_100A6150(4);
  sub_100A61F0(v10, 0);
  sub_100A6090(0);
  v11 = (float *)this[9];
  v11[1] = ((double (__thiscall *)(_DWORD *))*(_DWORD *)(*this[1] + 2044))(this[1]);
  ((void (__thiscall *)(_DWORD **, int, _DWORD))(*this)[7])(this, 1, -1.0);
  return 1;
}
