/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton interface for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
enum yytokentype
{
	ACCEPT_PASSWORD = 258,
	ACTION = 259,
	ADMIN = 260,
	AFTYPE = 261,
	T_ALLOW = 262,
	ANTI_NICK_FLOOD = 263,
	ANTI_SPAM_EXIT_MESSAGE_TIME = 264,
	ANTI_SPAM_CONNECT_NUMERIC = 265,
	AUTOCONN = 266,
	T_BLOCK = 267,
	BURST_AWAY = 268,
	BURST_TOPICWHO = 269,
	BYTES = 270,
	KBYTES = 271,
	MBYTES = 272,
	GBYTES = 273,
	TBYTES = 274,
	CALLER_ID_WAIT = 275,
	CAN_FLOOD = 276,
	CAN_IDLE = 277,
	CHANNEL = 278,
	CIDR_BITLEN_IPV4 = 279,
	CIDR_BITLEN_IPV6 = 280,
	CIPHER_PREFERENCE = 281,
	CLASS = 282,
	CLOAK_KEY1 = 283,
	CLOAK_KEY2 = 284,
	CLOAK_KEY3 = 285,
	COMPRESSED = 286,
	COMPRESSION_LEVEL = 287,
	CONNECT = 288,
	CONNECTFREQ = 289,
	CRYPTLINK = 290,
	CYCLE_ON_HOSTCHANGE = 291,
	DEFAULT_CIPHER_PREFERENCE = 292,
	DEFAULT_FLOODCOUNT = 293,
	DEFAULT_SPLIT_SERVER_COUNT = 294,
	DEFAULT_SPLIT_USER_COUNT = 295,
	DENY = 296,
	DESCRIPTION = 297,
	DIE = 298,
	DISABLE_AUTH = 299,
	DISABLE_FAKE_CHANNELS = 300,
	DISABLE_HIDDEN = 301,
	DISABLE_LOCAL_CHANNELS = 302,
	DISABLE_REMOTE_COMMANDS = 303,
	DOT_IN_IP6_ADDR = 304,
	DOTS_IN_IDENT = 305,
	DURATION = 306,
	EGDPOOL_PATH = 307,
	EMAIL = 308,
	ENABLE = 309,
	ENCRYPTED = 310,
	EXCEED_LIMIT = 311,
	EXEMPT = 312,
	FAILED_OPER_NOTICE = 313,
	FAKENAME = 314,
	IRCD_FLAGS = 315,
	FLATTEN_LINKS = 316,
	FFAILED_OPERLOG = 317,
	FKILLLOG = 318,
	FKLINELOG = 319,
	FGLINELOG = 320,
	FIOERRLOG = 321,
	FOPERLOG = 322,
	FOPERSPYLOG = 323,
	FUSERLOG = 324,
	GECOS = 325,
	GENERAL = 326,
	GLINE = 327,
	GLINES = 328,
	GLINE_EXEMPT = 329,
	GLINE_LOG = 330,
	GLINE_TIME = 331,
	GLINE_MIN_CIDR = 332,
	GLINE_MIN_CIDR6 = 333,
	GLOBAL_KILL = 334,
	IRCD_AUTH = 335,
	NEED_IDENT = 336,
	HAVENT_READ_CONF = 337,
	HIDDEN = 338,
	HIDDEN_ADMIN = 339,
	HIDDEN_NAME = 340,
	HIDDEN_OPER = 341,
	HIDE_SERVER_IPS = 342,
	HIDE_SERVERS = 343,
	HIDE_SPOOF_IPS = 344,
	HOST = 345,
	HUB = 346,
	HUB_MASK = 347,
	IDLETIME = 348,
	IGNORE_BOGUS_TS = 349,
	INVISIBLE_ON_CONNECT = 350,
	IP = 351,
	KILL = 352,
	KILL_CHASE_TIME_LIMIT = 353,
	KLINE = 354,
	KLINE_EXEMPT = 355,
	KLINE_REASON = 356,
	KLINE_WITH_REASON = 357,
	KNOCK_DELAY = 358,
	KNOCK_DELAY_CHANNEL = 359,
	LAZYLINK = 360,
	LEAF_MASK = 361,
	LINKS_DELAY = 362,
	LISTEN = 363,
	T_LOG = 364,
	LOGGING = 365,
	LOG_LEVEL = 366,
	MAX_ACCEPT = 367,
	MAX_BANS = 368,
	MAX_CHANS_PER_USER = 369,
	MAX_GLOBAL = 370,
	MAX_IDENT = 371,
	MAX_LOCAL = 372,
	MAX_NICK_CHANGES = 373,
	MAX_NICK_TIME = 374,
	MAX_NUMBER = 375,
	MAX_TARGETS = 376,
	MESSAGE_LOCALE = 377,
	MIN_NONWILDCARD = 378,
	MIN_NONWILDCARD_SIMPLE = 379,
	MODULE = 380,
	MODULES = 381,
	NAME = 382,
	NEED_PASSWORD = 383,
	NETWORK_DESC = 384,
	NETWORK_NAME = 385,
	NICK = 386,
	NICK_CHANGES = 387,
	NO_CREATE_ON_SPLIT = 388,
	NO_JOIN_ON_SPLIT = 389,
	NO_OPER_FLOOD = 390,
	NO_TILDE = 391,
	NOT = 392,
	NUMBER = 393,
	NUMBER_PER_IDENT = 394,
	NUMBER_PER_CIDR = 395,
	NUMBER_PER_IP = 396,
	NUMBER_PER_IP_GLOBAL = 397,
	OPERATOR = 398,
	OPERS_BYPASS_CALLERID = 399,
	OPER_LOG = 400,
	OPER_ONLY_UMODES = 401,
	OPER_PASS_RESV = 402,
	OPER_SPY_T = 403,
	OPER_UMODES = 404,
	JOIN_FLOOD_COUNT = 405,
	JOIN_FLOOD_TIME = 406,
	PACE_WAIT = 407,
	PACE_WAIT_SIMPLE = 408,
	PASSWORD = 409,
	PATH = 410,
	PING_COOKIE = 411,
	PING_TIME = 412,
	PING_WARNING = 413,
	PORT = 414,
	QSTRING = 415,
	QUIET_ON_BAN = 416,
	REASON = 417,
	REDIRPORT = 418,
	REDIRSERV = 419,
	REGEX_T = 420,
	REHASH = 421,
	TREJECT_HOLD_TIME = 422,
	REMOTE = 423,
	REMOTEBAN = 424,
	RESTRICT_CHANNELS = 425,
	RESTRICTED = 426,
	RSA_PRIVATE_KEY_FILE = 427,
	RSA_PUBLIC_KEY_FILE = 428,
	SSL_CERTIFICATE_FILE = 429,
	RESV = 430,
	RESV_EXEMPT = 431,
	SECONDS = 432,
	MINUTES = 433,
	HOURS = 434,
	DAYS = 435,
	WEEKS = 436,
	SENDQ = 437,
	SEND_PASSWORD = 438,
	SERVERHIDE = 439,
	SERVERINFO = 440,
	SERVICES = 441,
	SERVICES_NAME = 442,
	SERVLINK_PATH = 443,
	IRCD_SID = 444,
	TKLINE_EXPIRE_NOTICES = 445,
	T_SHARED = 446,
	T_CLUSTER = 447,
	TYPE = 448,
	SHORT_MOTD = 449,
	SILENT = 450,
	SPOOF = 451,
	SPOOF_NOTICE = 452,
	STATS_E_DISABLED = 453,
	STATS_I_OPER_ONLY = 454,
	STATS_K_OPER_ONLY = 455,
	STATS_O_OPER_ONLY = 456,
	STATS_P_OPER_ONLY = 457,
	TBOOL = 458,
	TMASKED = 459,
	T_REJECT = 460,
	TS_MAX_DELTA = 461,
	TS_WARN_DELTA = 462,
	TWODOTS = 463,
	T_ALL = 464,
	T_BOTS = 465,
	T_SOFTCALLERID = 466,
	T_CALLERID = 467,
	T_CCONN = 468,
	T_CCONN_FULL = 469,
	T_CLIENT_FLOOD = 470,
	T_DEAF = 471,
	T_DEBUG = 472,
	T_DRONE = 473,
	T_EXTERNAL = 474,
	T_FULL = 475,
	T_HIDECHANNELS = 476,
	T_INVISIBLE = 477,
	T_IPV4 = 478,
	T_IPV6 = 479,
	T_LOCOPS = 480,
	T_LOGPATH = 481,
	T_L_CRIT = 482,
	T_L_DEBUG = 483,
	T_L_ERROR = 484,
	T_L_INFO = 485,
	T_L_NOTICE = 486,
	T_L_TRACE = 487,
	T_L_WARN = 488,
	T_MAX_CLIENTS = 489,
	T_NCHANGE = 490,
	T_OPERWALL = 491,
	T_REJ = 492,
	T_SERVNOTICE = 493,
	T_SKILL = 494,
	T_SPY = 495,
	T_SSL = 496,
	T_UMODES = 497,
	T_UNAUTH = 498,
	T_UNRESV = 499,
	T_UNXLINE = 500,
	T_WALLOP = 501,
	THROTTLE_TIME = 502,
	TOPICBURST = 503,
	TRUE_NO_OPER_FLOOD = 504,
	TKLINE = 505,
	TXLINE = 506,
	TRESV = 507,
	UNKLINE = 508,
	USER = 509,
	USE_EGD = 510,
	USE_EXCEPT = 511,
	USE_INVEX = 512,
	USE_KNOCK = 513,
	USE_LOGGING = 514,
	USE_WHOIS_ACTUALLY = 515,
	VHOST = 516,
	VHOST6 = 517,
	XLINE = 518,
	WARN = 519,
	WARN_NO_NLINE = 520
};
#endif
/* Tokens.  */
#define ACCEPT_PASSWORD 258
#define ACTION 259
#define ADMIN 260
#define AFTYPE 261
#define T_ALLOW 262
#define ANTI_NICK_FLOOD 263
#define ANTI_SPAM_EXIT_MESSAGE_TIME 264
#define ANTI_SPAM_CONNECT_NUMERIC 265
#define AUTOCONN 266
#define T_BLOCK 267
#define BURST_AWAY 268
#define BURST_TOPICWHO 269
#define BYTES 270
#define KBYTES 271
#define MBYTES 272
#define GBYTES 273
#define TBYTES 274
#define CALLER_ID_WAIT 275
#define CAN_FLOOD 276
#define CAN_IDLE 277
#define CHANNEL 278
#define CIDR_BITLEN_IPV4 279
#define CIDR_BITLEN_IPV6 280
#define CIPHER_PREFERENCE 281
#define CLASS 282
#define CLOAK_KEY1 283
#define CLOAK_KEY2 284
#define CLOAK_KEY3 285
#define COMPRESSED 286
#define COMPRESSION_LEVEL 287
#define CONNECT 288
#define CONNECTFREQ 289
#define CRYPTLINK 290
#define CYCLE_ON_HOSTCHANGE 291
#define DEFAULT_CIPHER_PREFERENCE 292
#define DEFAULT_FLOODCOUNT 293
#define DEFAULT_SPLIT_SERVER_COUNT 294
#define DEFAULT_SPLIT_USER_COUNT 295
#define DENY 296
#define DESCRIPTION 297
#define DIE 298
#define DISABLE_AUTH 299
#define DISABLE_FAKE_CHANNELS 300
#define DISABLE_HIDDEN 301
#define DISABLE_LOCAL_CHANNELS 302
#define DISABLE_REMOTE_COMMANDS 303
#define DOT_IN_IP6_ADDR 304
#define DOTS_IN_IDENT 305
#define DURATION 306
#define EGDPOOL_PATH 307
#define EMAIL 308
#define ENABLE 309
#define ENCRYPTED 310
#define EXCEED_LIMIT 311
#define EXEMPT 312
#define FAILED_OPER_NOTICE 313
#define FAKENAME 314
#define IRCD_FLAGS 315
#define FLATTEN_LINKS 316
#define FFAILED_OPERLOG 317
#define FKILLLOG 318
#define FKLINELOG 319
#define FGLINELOG 320
#define FIOERRLOG 321
#define FOPERLOG 322
#define FOPERSPYLOG 323
#define FUSERLOG 324
#define GECOS 325
#define GENERAL 326
#define GLINE 327
#define GLINES 328
#define GLINE_EXEMPT 329
#define GLINE_LOG 330
#define GLINE_TIME 331
#define GLINE_MIN_CIDR 332
#define GLINE_MIN_CIDR6 333
#define GLOBAL_KILL 334
#define IRCD_AUTH 335
#define NEED_IDENT 336
#define HAVENT_READ_CONF 337
#define HIDDEN 338
#define HIDDEN_ADMIN 339
#define HIDDEN_NAME 340
#define HIDDEN_OPER 341
#define HIDE_SERVER_IPS 342
#define HIDE_SERVERS 343
#define HIDE_SPOOF_IPS 344
#define HOST 345
#define HUB 346
#define HUB_MASK 347
#define IDLETIME 348
#define IGNORE_BOGUS_TS 349
#define INVISIBLE_ON_CONNECT 350
#define IP 351
#define KILL 352
#define KILL_CHASE_TIME_LIMIT 353
#define KLINE 354
#define KLINE_EXEMPT 355
#define KLINE_REASON 356
#define KLINE_WITH_REASON 357
#define KNOCK_DELAY 358
#define KNOCK_DELAY_CHANNEL 359
#define LAZYLINK 360
#define LEAF_MASK 361
#define LINKS_DELAY 362
#define LISTEN 363
#define T_LOG 364
#define LOGGING 365
#define LOG_LEVEL 366
#define MAX_ACCEPT 367
#define MAX_BANS 368
#define MAX_CHANS_PER_USER 369
#define MAX_GLOBAL 370
#define MAX_IDENT 371
#define MAX_LOCAL 372
#define MAX_NICK_CHANGES 373
#define MAX_NICK_TIME 374
#define MAX_NUMBER 375
#define MAX_TARGETS 376
#define MESSAGE_LOCALE 377
#define MIN_NONWILDCARD 378
#define MIN_NONWILDCARD_SIMPLE 379
#define MODULE 380
#define MODULES 381
#define NAME 382
#define NEED_PASSWORD 383
#define NETWORK_DESC 384
#define NETWORK_NAME 385
#define NICK 386
#define NICK_CHANGES 387
#define NO_CREATE_ON_SPLIT 388
#define NO_JOIN_ON_SPLIT 389
#define NO_OPER_FLOOD 390
#define NO_TILDE 391
#define NOT 392
#define NUMBER 393
#define NUMBER_PER_IDENT 394
#define NUMBER_PER_CIDR 395
#define NUMBER_PER_IP 396
#define NUMBER_PER_IP_GLOBAL 397
#define OPERATOR 398
#define OPERS_BYPASS_CALLERID 399
#define OPER_LOG 400
#define OPER_ONLY_UMODES 401
#define OPER_PASS_RESV 402
#define OPER_SPY_T 403
#define OPER_UMODES 404
#define JOIN_FLOOD_COUNT 405
#define JOIN_FLOOD_TIME 406
#define PACE_WAIT 407
#define PACE_WAIT_SIMPLE 408
#define PASSWORD 409
#define PATH 410
#define PING_COOKIE 411
#define PING_TIME 412
#define PING_WARNING 413
#define PORT 414
#define QSTRING 415
#define QUIET_ON_BAN 416
#define REASON 417
#define REDIRPORT 418
#define REDIRSERV 419
#define REGEX_T 420
#define REHASH 421
#define TREJECT_HOLD_TIME 422
#define REMOTE 423
#define REMOTEBAN 424
#define RESTRICT_CHANNELS 425
#define RESTRICTED 426
#define RSA_PRIVATE_KEY_FILE 427
#define RSA_PUBLIC_KEY_FILE 428
#define SSL_CERTIFICATE_FILE 429
#define RESV 430
#define RESV_EXEMPT 431
#define SECONDS 432
#define MINUTES 433
#define HOURS 434
#define DAYS 435
#define WEEKS 436
#define SENDQ 437
#define SEND_PASSWORD 438
#define SERVERHIDE 439
#define SERVERINFO 440
#define SERVICES 441
#define SERVICES_NAME 442
#define SERVLINK_PATH 443
#define IRCD_SID 444
#define TKLINE_EXPIRE_NOTICES 445
#define T_SHARED 446
#define T_CLUSTER 447
#define TYPE 448
#define SHORT_MOTD 449
#define SILENT 450
#define SPOOF 451
#define SPOOF_NOTICE 452
#define STATS_E_DISABLED 453
#define STATS_I_OPER_ONLY 454
#define STATS_K_OPER_ONLY 455
#define STATS_O_OPER_ONLY 456
#define STATS_P_OPER_ONLY 457
#define TBOOL 458
#define TMASKED 459
#define T_REJECT 460
#define TS_MAX_DELTA 461
#define TS_WARN_DELTA 462
#define TWODOTS 463
#define T_ALL 464
#define T_BOTS 465
#define T_SOFTCALLERID 466
#define T_CALLERID 467
#define T_CCONN 468
#define T_CCONN_FULL 469
#define T_CLIENT_FLOOD 470
#define T_DEAF 471
#define T_DEBUG 472
#define T_DRONE 473
#define T_EXTERNAL 474
#define T_FULL 475
#define T_HIDECHANNELS 476
#define T_INVISIBLE 477
#define T_IPV4 478
#define T_IPV6 479
#define T_LOCOPS 480
#define T_LOGPATH 481
#define T_L_CRIT 482
#define T_L_DEBUG 483
#define T_L_ERROR 484
#define T_L_INFO 485
#define T_L_NOTICE 486
#define T_L_TRACE 487
#define T_L_WARN 488
#define T_MAX_CLIENTS 489
#define T_NCHANGE 490
#define T_OPERWALL 491
#define T_REJ 492
#define T_SERVNOTICE 493
#define T_SKILL 494
#define T_SPY 495
#define T_SSL 496
#define T_UMODES 497
#define T_UNAUTH 498
#define T_UNRESV 499
#define T_UNXLINE 500
#define T_WALLOP 501
#define THROTTLE_TIME 502
#define TOPICBURST 503
#define TRUE_NO_OPER_FLOOD 504
#define TKLINE 505
#define TXLINE 506
#define TRESV 507
#define UNKLINE 508
#define USER 509
#define USE_EGD 510
#define USE_EXCEPT 511
#define USE_INVEX 512
#define USE_KNOCK 513
#define USE_LOGGING 514
#define USE_WHOIS_ACTUALLY 515
#define VHOST 516
#define VHOST6 517
#define XLINE 518
#define WARN 519
#define WARN_NO_NLINE 520




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 133 "ircd_parser.y"
{
	int number;
	char *string;
}
/* Line 1489 of yacc.c.  */
#line 584 "y.tab.h"
YYSTYPE;
# define yystype YYSTYPE	/* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;
