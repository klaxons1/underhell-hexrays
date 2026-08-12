void __userpurge sub_1005E300(
        int a1@<ecx>,
        int a2@<edi>,
        int a3@<esi>,
        int a4,
        int a5,
        char ArgList,
        int a7,
        float a8,
        float a9)
{
  void (__thiscall *v10)(int, int *); // eax
  int v11; // [esp-8h] [ebp-50h]
  int Buffer; // [esp+0h] [ebp-48h] BYREF
  int v14; // [esp+4h] [ebp-44h]
  int v15; // [esp+8h] [ebp-40h]
  int v16; // [esp+Ch] [ebp-3Ch]
  int v17; // [esp+10h] [ebp-38h]
  int v18; // [esp+14h] [ebp-34h]
  int v19; // [esp+18h] [ebp-30h]
  int v20; // [esp+1Ch] [ebp-2Ch]
  int v21; // [esp+20h] [ebp-28h]
  int v22; // [esp+24h] [ebp-24h]
  int v23; // [esp+28h] [ebp-20h]
  int v24; // [esp+2Ch] [ebp-1Ch]
  int v25; // [esp+30h] [ebp-18h]
  int v26; // [esp+34h] [ebp-14h]
  int v27; // [esp+38h] [ebp-10h]
  int v28; // [esp+3Ch] [ebp-Ch]
  _BYTE v29[4]; // [esp+40h] [ebp-8h] BYREF
  int v30; // [esp+44h] [ebp-4h]

  if ( a9 - a8 > 0.0 )
  {
    if ( a4 )
      *(_DWORD *)(a1 + 252) = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)a4 + 8))(a4);
    else
      *(_DWORD *)(a1 + 252) = -1;
    *(_BYTE *)(a1 + 912) = 0;
    *(float *)(a1 + 260) = a8;
    *(float *)(a1 + 264) = a9;
    (*(void (__thiscall **)(int, int, int, int, int, int, int, int))(*(_DWORD *)dword_1047CA78 + 12))(
      dword_1047CA78,
      a5,
      a1 + 268,
      512,
      a3,
      Buffer,
      v14,
      v15);
    sub_10229600("closecaption");
    if ( (unsigned __int8)sub_102291A0(v29) )
      *(_BYTE *)(a1 + 256) = !*(_DWORD *)(v30 + 48) && *(_DWORD *)(dword_10430904 + 48);
    else
      *(_BYTE *)(a1 + 256) = 1;
    (*(void (__thiscall **)(int, _DWORD, int))(*(_DWORD *)(a1 + 44) + 264))(a1 + 44, *(unsigned __int8 *)(a1 + 256), a2);
    Buffer = a7;
    sub_10228370((char *)&Buffer, 0x40u, "%d \\ %d", ArgList);
    v10 = *(void (__thiscall **)(int, int *))(*(_DWORD *)dword_1047CA78 + 12);
    Buffer = 128;
    v10(dword_1047CA78, &Buffer);
    if ( fabs(a8 - *((float *)off_103DC81C + 3)) >= 1.0 )
    {
      sub_102366F0(255);
    }
    else
    {
      (*(void (__thiscall **)(int, const char *, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int))(*(_DWORD *)dword_1044CC48 + 36))(
        dword_1044CC48,
        "ShowCommentary",
        v11,
        a1 + 780,
        Buffer,
        v14,
        v15,
        v16,
        v17,
        v18,
        v19,
        v20,
        v21,
        v22,
        v23,
        v24,
        v25,
        v26,
        v27);
      sub_10248C80(v28);
    }
  }
}
